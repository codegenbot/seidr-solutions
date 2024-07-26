#include <iostream>
#include <vector>
#include <iomanip>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total_price = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (100.0 - discounts[i]) / 100.0;
    }
    return total_price;
}

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

    float total_price = calculateTotalPrice(prices, discounts);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total price after applying discounts: $" << total_price << std::endl;

    return 0;
}