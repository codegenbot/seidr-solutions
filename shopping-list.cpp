#include <vector>
#include <iostream>
#include <cmath>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float totalPrice = 0.0;
    for (size_t i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] - (prices[i] * (discounts[i] / 100));
        totalPrice += std::round(discountedPrice * 100) / 100;
    }
    return totalPrice;
}

int main() {
    size_t n;
    std::cin >> n;

    std::vector<float> prices(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> prices[i];
    }

    std::vector<float> discounts(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> discounts[i];
    }

    float totalPrice = calculateTotalPrice(prices, discounts);
    std::cout << totalPrice << std::endl;

    return 0;
}