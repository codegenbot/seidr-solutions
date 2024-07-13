#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> prices = {10.0, 20.0, 30.0};
    std::vector<float> discounts = {0.1, 0.15, 0.2};

    float total_price = 0.0;
    for(size_t i = 0; i < prices.size(); ++i) {
        total_price += (1 - discounts[i]) * prices[i];
    }

    total_price = std::round(total_price * 100) / 100.0;

    std::cout << "Total price after discount: $" << total_price << std::endl;

    return 0;
}