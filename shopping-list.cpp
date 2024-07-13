#include <iostream>
#include <vector>

double calculateTotalPrice(const std::vector<double>& prices, const std::vector<double>& discounts) {
    if (prices.size() != discounts.size()) {
        return 0.0;
    }

    double total_price = 0.0;
    for (std::size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1.0 - discounts[i] / 100.0);
    }
    return total_price;
}

int main() {
    std::vector<double> prices = {10.0, 20.0, 30.0};
    std::vector<double> discounts = {5.0, 10.0, 15.0};
    double total = calculateTotalPrice(prices, discounts);
    
    std::cout << "Total price after discount: " << total << std::endl;
    
    return 0;
}