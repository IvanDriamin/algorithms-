#include <iostream>
int main() {
    int const n = 5;
    int m[n] = {3, 1, 9, 7, 8};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (m[j] > m[j + 1]) {
                int b = m[j];
                m[j] = m[j + 1];
                m[j + 1] = b;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << m[i];
    }
}