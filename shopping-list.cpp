#include <iostream>
#include <vector>

int main() {
    std::vector<float> prices = {19, 32.13, 16.58, 41.5, 14.94, 11.62, 44.85, 34.05, 13.75, 11.25, 48.76, 34.93, 29.99, 48.78, 5.27, 39.5, 21.59, 45.72, 18.89, 48.67};
    std::vector<float> discounts = {0.1, 0.15, 0.2, 0.1, 0.15, 0.2, 0.1, 0.15, 0.2, 0.1, 0.15, 0.2, 0.1, 0.15, 0.2, 0.1, 0.15, 0.2, 0.1, 0.15};

    float total_price = 0.0;
    for(size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1 - discounts[i]);
    }
    
    std::cout << "Total price after discount: $" << total_price << std::endl;

    return 0;
}