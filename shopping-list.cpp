#include <iostream>

float total_price = 0.0;
for(size_t i = 0; i < prices.size(); ++i) {
    total_price += prices[i] * (1 - discounts[i]);
}

std::cout << "Total price after discount: $" << total_price << std::endl;