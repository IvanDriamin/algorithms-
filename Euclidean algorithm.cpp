#include <iostream>
int main() {
    int a, b, t;
    std::cin >> a;
    std::cin >> b;
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    std::cout << a;
}