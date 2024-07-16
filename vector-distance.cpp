#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    double a[n], b[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow(a[i] - b[i], 2);
    }
    std::cout << sqrt(sum) << std::endl;
    return 0;
}