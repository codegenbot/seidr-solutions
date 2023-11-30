#include <vector>
#include <iostream>
#include <cmath>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0.0;
    for (size_t i = 0; i < prices.size(); ++i) {
        float discountedPrice = prices[i] - (prices[i] * discounts[i] / 100.0);
        totalPrice += std::round(discountedPrice * 100.0) / 100.0;
    }
    return totalPrice;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<float> prices(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }

    std::vector<float> discounts(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> discounts[i];
    }

    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << totalPrice << std::endl;

    return 0;
}