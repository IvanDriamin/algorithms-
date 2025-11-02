#include <iostream>
int main() {
    int const n = 5;
    int m[n] = { 3, 1, 9, 7, 8 };
    for (int i = 0; i < n; i++) {
        bool f = true;
        for (int j = 0; j < n - (i + 1); j++) {
            if (m[j] > m[j + 1]) {
                f = false;
                std::swap(m[j], m[j + 1]);
            }
        }
        if (f == true) {
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        std::cout << m[i];
    }
}