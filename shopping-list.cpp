#include <iostream>
#include <vector>
#include <iomanip>

float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        float discounted_price = prices[i] * (1.0 - discounts[i] / 100.0);
        total += discounted_price;
    }
    return total;
}

int main() {
    std::vector<float> prices = {36.73, 44.51, 27.58, 6.67}; // Prices
    std::vector<float> discounts = {4.0, 94.49, 73.37, 54.3, 86.09}; // Discounts
    float total_price = calculateTotalPrice(prices, discounts);
    std::cout << std::fixed << std::setprecision(2) << "Total price after discounts: " << total_price << std::endl;
    return 0;
}