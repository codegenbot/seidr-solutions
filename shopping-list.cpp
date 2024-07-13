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
    std::vector<float> prices = {10.99, 5.00, 2.50};
    std::vector<float> discounts = {0.05, 0.10, 0.15};
    double result = shoppingList(prices, discounts);
    std::cout << "Total price after discount: $" << result << std::endl;
    return 0;
}