#include <iostream>
void insertion(int a[], int n) {
    int b, j;
    for (int i = 1; i < n; i++) {
        b = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > b) {
            a[j + 1] = a[j];
            a[j] = b;
            j--;
        }
    }
}
int main() {
    int const n = 6;
    int a[n] = {2, 7, 4, 5, 9, 1};
    insertion(a, n);
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << "  ";
    }
}