#include <vector>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    if (prices.size() != discounts.size()) {
        return 0.0; // or any other appropriate handling
    }

    float total_price = 0.0;
    for (std::size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1.0 - (discounts[i] == 0 ? 0.0 : discounts[i] / 100.0));
    }
    return total_price;
}