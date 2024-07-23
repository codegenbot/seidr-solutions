#include <vector>
#include <iostream>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        float discounted_price = prices[i] * (1.0 - discounts[i] / 100.0);
        total += discounted_price;
    }
    return total;
}

int main() {
    std::vector<float> prices = {10.0, 20.0, 30.0}; 
    std::vector<float> discounts = {10.0, 5.0, 15.0}; 
    float total_price = calculateTotalPrice(prices, discounts);
    std::cout << "Total price after discounts: " << total_price << std::endl;
    return 0;
}