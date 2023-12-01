#include <vector>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float totalPrice = 0.0;

    for (int i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] - ((discounts[i] / 100.0) * prices[i]);
        totalPrice += discountedPrice;
    }

    return totalPrice;
}