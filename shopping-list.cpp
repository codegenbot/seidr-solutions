#include <vector>
#include <iostream>

int main() {
    std::vector<float> prices = {10.0, 20.0, 30.0};
    std::vector<float> discounts = {10.0, 5.0, 15.0};
    
    float total_price = 0.0;
    
    for (size_t i = 0; i < prices.size(); ++i) {
        prices[i] = prices[i] * (1.0 - discounts[i] / 100.0);
        total_price += prices[i];
    }
    
    std::cout << "Total Price after Discounts: " << total_price << std::endl;
    
    return 0;
}