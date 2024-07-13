#include <vector>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}