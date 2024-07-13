#include <iostream>
#include <iomanip>
#include <vector>

double calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double total_price = 0.0;
    for(std::size_t i = 0; i < prices.size(); i++) {
        total_price += prices[i] - prices[i] * (discounts[i] / 100.0);
    }
    return total_price;
}

int main() {
    std::vector<float> prices = {10.61, 1.89, 37.67, 16.52, 32.04, 28.36};
    std::vector<float> discounts = {91.96, 34.07, 63.22, 54.08, 41.41, 62.79};
    
    double total = calculateTotalPrice(prices, discounts);
    std::cout << std::fixed << std::setprecision(2) << "Total price after discounts: " << total << std::endl;
    
    return 0;
}