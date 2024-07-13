#include <iostream>
#include <vector>

int main() {
    std::vector<float> prices = {19.0, 32.13, 16.58, 41.5, 14.94, 11.62, 44.85, 34.05, 13.75, 11.25, 48.76, 34.93, 29.99, 48.78, 5.27, 39.5, 21.59, 45.72, 18.89, 48.67};
    std::vector<float> discounts = {16.82f, 21.18f, 40.14f, 3.75f, 99.72f, 18.27f, 5.72f, 26.48f, 94.73f, 48.66f, 37.76f, 13.68f, 30.9f, 54.29f, 41.34f, 68.8f, 83.97f, 95.63f, 74.28f};
    
    float total_price = 0.0;
    for(size_t i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1 - discounts[i] / 100);
    }
    
    std::cout << "Total price after discount: $" << total_price << std::endl;
    
    return 0;
}