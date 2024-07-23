#include <iostream>
#include <vector>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total_price = 0;
    for (size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1 - (discounts[i] / 100));
    }
    return total_price;
}

int main() {
    std::vector<float> prices = {1, 4.43, 88.96};
    std::vector<float> discounts = {5, 10, 15};

    float total_price = calculateTotalPrice(prices, discounts);

    std::cout << "Total price after discount: " << total_price << std::endl;

    return 0;
}