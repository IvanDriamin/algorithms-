#include <iostream>
#include <vector>
int main() {
    int x;
    std::vector<int> f;
    std::cin >> x;
    for (int i = 2; i <= sqrt(x); i++) {
        while (x % i == 0) {
            f.push_back(i);
            x /= i;
        }
    }
    if (x != 1) {
        f.push_back(x);
    }
    for (int i = 0; i < f.size(); i++) {
        std::cout << f[i] << "  ";
    }
}