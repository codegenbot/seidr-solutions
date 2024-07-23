```cpp
#include <vector>
#include <iostream>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (1 - discounts[i] / 100.0);
        total += discount; 
    }
    return total;
}

int main() {
    std::vector<float> prices = {10.99f, 20.00f, 5.50f};
    std::vector<float> discounts = {5.0f, 10.0f, 2.0f};
    double total = shoppingList(prices, discounts);
    std::cout << "Total: $" << total << std::endl;
    return 0;
}