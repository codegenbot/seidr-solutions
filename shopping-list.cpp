#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> prices = {10.0, 20.0, 30.0};
    std::vector<float> discounts = {0.1, 0.2, 0.15};
    float total_price = 0;

    for (int i = 0; i < prices.size(); ++i) {
        total_price += prices[i] - prices[i] * discounts[i];
    }

    total_price = std::round(total_price * 100) / 100.0;

    std::cout << "Total price after discounts: " << total_price << std::endl;

    return 0;
}