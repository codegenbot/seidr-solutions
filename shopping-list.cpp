#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    size_t n;
    std::cin >> n;
    std::vector<float> prices(n);
    std::vector<float> discounts(n);

    for (size_t i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }

    for (size_t i = 0; i < n; ++i) {
        std::cin >> discounts[i];
    }

    float total = 0.0;
    for (size_t i = 0; i < n; ++i) {
        total += prices[i] * (1 - discounts[i] * 0.01);
    }

    std::cout << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}