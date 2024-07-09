#include <iostream>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}