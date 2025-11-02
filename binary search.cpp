#include <iostream>
#include <algorithm>
int main() {
    setlocale(LC_ALL, "rus");
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int r = 0;
    for (int i = 0; a[i] != a[-2]; i++) {
        r++;
    }
    bool f = false;
    int k;
    std::cin >> k;
    int l = 0;
    int m;
    while ((l <= r) && (f != true)) {
        m = (l + r) / 2;
        if (a[m] == k) 
            f = true;
        if (a[m] > k) 
            r = m - 1;
        else 
            l = m + 1;
    }
    if (f) 
        std::cout << "Индекс элемента " << k << " в массиве равен: " << m;
    else 
        std::cout << "такого элемента в массиве нет";
}