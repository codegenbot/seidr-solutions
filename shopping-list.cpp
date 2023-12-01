#include <iostream>
#include <vector>
#include <ostream>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0.0;
    for (size_t i = 0; i < prices.size() && i < discounts.size(); i++) {
        float discountedPrice = prices[i] - (prices[i] * discounts[i] / 100);
        totalPrice += discountedPrice;
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