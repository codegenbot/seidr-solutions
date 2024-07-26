#include <iostream>
#include <vector>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total_price = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1.0f - (discounts[i] / 100.0f));
    }
    return total_price;
}

int main() {
    std::vector<float> prices = {10.0, 20.0, 30.0};
    std::vector<float> discounts = {10.0, 15.0, 20.0};

    float total_price = calculateTotalPrice(prices, discounts);

    std::cout << "Total price after applying discounts: $" << total_price << std::endl;

    return 0;
}