#include <vector>
#include <iostream>

float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0.0f;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (100 - discounts[i]) / 100;
    }
    return total;
}

int main() {
    std::vector<float> prices = {10.5, 20.3, 5.7};
    std::vector<float> discounts = {10, 5, 8};
    
    float total = calculateTotalPrice(prices, discounts);
    
    std::cout << "Total price after discounts: " << total << std::endl;
    
    return 0;
}