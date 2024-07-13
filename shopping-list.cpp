#include <iostream>
#include <vector>

int main() {
    std::vector<float> prices = {1.0, 2.0, 3.0}; // Sample prices
    std::vector<float> discounts = {0.1, 0.2, 0.3}; // Sample discounts

    float total_price = 0.0;
    for(size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1 - discounts[i]);
    }

    std::cout << "Total price after discount: $" << total_price << std::endl;

    return 0;
}