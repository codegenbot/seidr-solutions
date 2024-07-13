#include <iostream>
#include <vector>

double calculateTotalPrice(const std::vector<double>& prices, const std::vector<double>& discounts) {
    double total_price = 0.0;
    for (std::size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1.0 - discounts[i] / 100.0) * (1 - discounts[i] / 100.0);
    }
    return total_price;
}

int main() {
    std::vector<double> prices = {10.0, 20.0, 30.0};
    std::vector<double> discounts = {10.0, 5.0, 8.0};
    
    double total_price = calculateTotalPrice(prices, discounts);
    
    std::cout << "Total price after applying discounts: " << total_price << std::endl;
    
    return 0;
}