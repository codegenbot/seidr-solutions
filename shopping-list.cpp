#include <iostream>

int main() {
    std::vector<float> prices = {10.0, 20.0, 30.0};
    std::vector<float> discounts = {0.1, 0.2, 0.15};

    float total_price = 0.0;
    for(size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1 - discounts[i]);
    }

    std::cout << "Total price after discount: $" << total_price << std::endl;

    return 0;
}