#include <iostream>
#include <iomanip>
#include <vector>

float shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0;
    for(int i = 0; i < prices.size(); i++) {
        total += (1 - (discounts[i]/100)) * prices[i];
    }
    return total;
}

int main() {
    std::vector<float> prices({10.99f, 5.50f, 23.75f});
    std::vector<float> discounts({20.00f, 15.00f, 10.00f});
    
    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
}