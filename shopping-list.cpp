#include <iostream>
#include <vector>

double calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
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
    // Example usage
    std::vector<float> prices = {10.0, 20.0, 30.0};
    std::vector<float> discounts = {5.0, 10.0, 15.0};
    
    double total_price = calculateTotalPrice(prices, discounts);
    
    // Output the total price after discounts
    std::cout << "Total price after discounts: " << total_price << std::endl;
    
    return 0;
}