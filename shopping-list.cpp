#include <iostream>
#include <vector>

int main() {
    std::vector<float> prices = {5.0, 10.0, 15.0};
    std::vector<float> discounts = {10.0, 5.0, 20.0};

    float total_price = 0.0;
    for(int i = 0; i < prices.size(); i++) {
        total_price += prices[i] - prices[i] * discounts[i] / 100.0;
    }
    
    std::cout << "Total price after discounts: " << total_price << std::endl;

    return 0;
}