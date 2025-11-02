#include <iostream>
void heapify(int a[], int n, int i) {
    int max = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && a[l] > a[max])
        max = l;
    if (r < n && a[r] > a[max])
        max = r;
    if (max != i) {
        std::swap(a[i], a[max]);
        heapify(a, n, max);
    }
}
void heapSort(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);
    for (int i = n - 1; i >= 0; i--) {
        std::swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}
int main() {
    int const n = 6;
    int a[n] = { 60 ,20 ,40 ,70, 30, 10 };
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(a, n, i);
    }
    heapSort(a, n);
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << "  ";
    }
}