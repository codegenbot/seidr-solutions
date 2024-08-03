#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> prices = {10.0, 20.0, 30.0}; // Example prices vector
    std::vector<float> discounts = {0.1, 0.15, 0.2}; // Example discounts vector
    
    float total_price = 0.0;
    
    for (int i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1 - discounts[i]);
    }
    
    std::cout << "Total price after discount: " << total_price << std::endl;
    
    return 0;
}