#include <iostream>
#include <vector>
#include <cmath>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    std::vector<float> prices = {10, 20, 30};
    std::vector<float> discounts = {0.1, 0.2, 0.3};
    double total = shoppingList(prices, discounts);
    std::cout << "Total: " << total << std::endl;
    return 0;
}