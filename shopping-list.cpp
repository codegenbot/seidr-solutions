#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    std::vector<float> prices = {19.0, 32.13, 16.58, 41.5, 14.94, 11.62, 44.85, 34.05, 13.75, 11.25, 
                                  48.76, 34.93, 29.99, 48.78, 5.27, 39.5, 21.59, 45.72, 18.89, 48.67};

    std::vector<float> discounts = {16.82, 21.18, 40.14, 3.75, 99.72, 18.27, 5.72, 26.48, 94.73, 48.66, 
                                    37.76, 13.68, 30.9, 54.29, 41.34, 68.8, 83.97, 95.63, 74.28};

    float total_price = 0.0;
    for(size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1 - discounts[i] / 100.0);
    }
    
    std::cout << std::fixed << std::setprecision(2) << "Total price after discount: $" << total_price << std::endl;
    
    return 0;
}