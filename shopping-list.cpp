#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int n;
    std::cin >> n;

    std::vector<float> prices(n);
    std::vector<float> discounts(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }

    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
    }

    float total_price = 0.0f;
    for (int i = 0; i < n; ++i) {
        total_price += prices[i] * (100.0f - discounts[i]) / 100.0f;
    }

    std::cout << std::fixed << std::setprecision(2) << total_price << "\n";

    return 0;
}