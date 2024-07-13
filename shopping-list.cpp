#include <iostream>
#include <vector>

double calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double total_price = 0.0;
    for(std::size_t i = 0; i < prices.size(); i++) {
        total_price += prices[i] - prices[i] * (discounts[i] / 100.0);
    }
    return total_price;
}

int main() {
    std::vector<float> prices = {10.0, 20.0, 30.0};
    std::vector<float> discounts = {5.0, 10.0, 15.0};
    
    double total = calculateTotalPrice(prices, discounts);
    std::cout << "Total price after discounts: " << total << std::endl;
    
    return 0;
}