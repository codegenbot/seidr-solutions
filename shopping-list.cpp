#include <iostream>
#include <vector>

int main() {
    std::vector<float> prices = {10.0, 20.0, 30.0}; 
    std::vector<float> discounts = {5.0, 10.0, 15.0};
    float total_price = 0.0;

    for (int i = 0; i < prices.size(); i++) {
        prices[i] = prices[i] - prices[i] * discounts[i] / 100.0;
        total_price += prices[i];
    }

    std::cout << "Total price after discounts: " << total_price << std::endl;

    return 0;
}