#include <iostream>
#include <vector>
#include <cmath>

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

    float total_price = 0.0;
    for (int i = 0; i < n; ++i) {
        total_price += round(prices[i] * (1.0 - discounts[i] / 100.0) * 100) / 100;
    }

    std::cout << "Total price after discounts: " << total_price << std::endl;

    return 0;
}