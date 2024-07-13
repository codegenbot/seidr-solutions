#include <vector>
#include <iostream>

int main() {
    std::vector<float> prices = {10.0, 20.0, 30.0};
    std::vector<float> discounts = {5.0, 10.0, 15.0};

    float total_price = 0.0;
    for(size_t i = 0; i < prices.size(); i++) {
        total_price += prices[i] - prices[i] * discounts[i] / 100.0;
    }

    std::cout << "Total price after discounts: " << total_price << std::endl;

    return 0;
}