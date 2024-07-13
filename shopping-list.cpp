#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> prices = {5.0, 10.0, 15.0};
    std::vector<float> discounts = {0.1, 0.2, 0.15};

    float total_price = 0.0;

    for (int i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1 - discounts[i]);
    }

    total_price = std::round(total_price * 100) / 100.0;

    std::cout << "Total price after applying discounts: $" << total_price << std::endl;

    return 0;
}