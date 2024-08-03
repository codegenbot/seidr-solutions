#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> prices = {19, 28.76, 37.34, 48.4, 12.65, 30.93, 46.51, 37.42, 25.5, 4.89, 12.41, 11.75, 8.06, 6.43, 45.83, 1.69, 13.03, 10.1, 37.91, 18.32}; 
    std::vector<float> discounts = {0.1, 0.15, 0.2, 0.05, 0.08, 0.12, 0.07, 0.03, 0.4, 0.11, 0.09, 0.06, 0.04, 0.25, 0.02, 0.12, 0.07, 0.13, 0.15}; 
    
    float total_price = 0.0;
    
    for (int i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1 - discounts[i]);
    }
    
    std::cout << "Total price after discount: " << total_price << std::endl;
    
    return 0;
}