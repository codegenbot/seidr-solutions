#include <vector>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    if (prices.size() != discounts.size()) {
        throw std::invalid_argument("Input vectors must have the same number of elements.");
    }

    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] - (prices[i] * discounts[i] / 100);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}