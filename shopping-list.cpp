#include <vector>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total_price = 0.0;
    for(size_t i = 0; i < prices.size(); i++) {
        total_price += prices[i] - prices[i] * discounts[i] / 100.0;
    }
    return total_price;
}