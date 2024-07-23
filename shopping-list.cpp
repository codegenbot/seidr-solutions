#include <iostream>
#include <vector>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total_price = 0.0f;
    for (size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1 - (discounts[i] / 100.0));
    }
    return total_price;
}

int main() {
    std::vector<float> prices = {10.0f, 20.0f, 30.0f};
    std::vector<float> discounts = {5.0f, 10.0f, 15.0f};

    float total_price = calculateTotalPrice(prices, discounts);

    std::cout << "Total price after discount: " << total_price << std::endl;

    return 0;
}