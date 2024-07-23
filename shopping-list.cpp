#include <vector>
#include <iostream>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = price * (discounts[i] / 100);
        total += price - discount;
    }
    return std::round(total * 100) / 100.0;
}

int main() { return shoppingList(std::vector<float>{}, std::vector<float>{}); }