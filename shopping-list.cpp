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