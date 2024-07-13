#include <iostream>
#include <vector>
#include <iomanip>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total_price = 0.0;
    for(std::size_t i = 0; i < prices.size(); i++) {
        total_price += prices[i] - prices[i] * discounts[i] / 100.0;
    }
    return round(total_price * 100.0) / 100.0;
}

int main() {
    std::vector<float> prices = {10.61, 1.89, 37.67, 16.52, 32.04, 28.36};
    std::vector<float> discounts = {6, 91.96, 34.07, 63.22, 54.08, 41.41, 62.79};
    
    float total = calculateTotalPrice(prices, discounts);
    std::cout << "Total price after discounts: " << std::fixed << std::setprecision(2) << total << std::endl;
    
    return 0;
}