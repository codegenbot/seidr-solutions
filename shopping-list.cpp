#include <vector>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float total_price = 0.0;
    for (size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1 - (discounts[i] / 100.0));
    }
    return total_price;
}