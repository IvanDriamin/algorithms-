#include <iostream>
void silection(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int b = a[0];
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
}
int main() {
    int const n = 6;
    int a[n] = { 4, 8, 1, 5, 10, 3 };
    silection(a, n);
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << "  ";
    }
}