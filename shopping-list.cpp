#include <iostream>
#include <vector>

int main() {
    std::vector<float> prices = {19, 28.76, 37.34, 48.4, 12.65, 30.93, 46.51, 37.42, 25.5, 4.89, 12.41, 11.75, 8.06, 6.43, 45.83, 1.69, 13.03, 10.1, 37.91, 18.32}; 
    std::vector<float> discounts = {59.17, 38.61, 71.54, 91.83, 6.16, 5.05, 1.96, 57.28, 61.27, 5.45, 74.36, 24.62, 38.91, 14.27, 55.54, 48.15, 25.44, 63.06, 36.67}; 
    
    float total_price = 0.0;
    
    for (int i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1 - discounts[i] / 100.0);
    }
    
    std::cout << "Total price after discount: " << total_price << std::endl;
    
    return 0;
}