#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    std::vector<float> prices(n), discounts(n);
    float total = 0.0;

    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
        total += prices[i] * (1 - discounts[i] / 100.0);
    }

    std::cout << std::fixed << std::setprecision(2) << total << std::endl;

    return 0;
}