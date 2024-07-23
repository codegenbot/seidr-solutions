#include <vector>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        float discounted_price = prices[i] * (1.0 - discounts[i] / 100.0);
        total += discounted_price;
    }
    return total;
}