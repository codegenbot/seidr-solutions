#include <iostream>
#include <vector>
#include <iomanip>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double totalPrice = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        totalPrice += prices[i] * (1 - discounts[i] / 100.0);
    }
    return totalPrice;
}