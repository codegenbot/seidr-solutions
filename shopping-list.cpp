```c++
#include <vector>
#include <cmath>
#include <iostream>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    std::vector<float> prices = {1.0f, 2.0f, 3.0f};
    std::vector<float> discounts = {0.05f, 0.10f, 0.15f};
    
    double total = shoppingList(prices, discounts);
    std::cout << "Total price: " << total << std::endl;
    
    return 0;
}