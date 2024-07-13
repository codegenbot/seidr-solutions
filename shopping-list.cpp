#include <vector>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0;
    for (size_t i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}

int main() {
    std::vector<float> prices = {10.0, 20.0, 30.0};
    std::vector<float> discounts = {10.0, 15.0, 20.0};

    float totalPrice = calculateTotalPrice(prices, discounts);
    return 0;
}