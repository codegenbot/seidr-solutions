#include <vector>
#include <iostream>

double shoppingList(double prices[], int n, double discounts[]) {
    double total = 0;
    for (int i = 0; i < n; ++i) {
        total += prices[i] - (prices[i] * discounts[i] / 100.0);
    }
    return total;
}

int main() {
    int numItems, numDiscounts;
    std::cin >> numItems;
    
    double prices[numItems];
    for (int i = 0; i < numItems; ++i) {
        std::cin >> prices[i];
    }

    std::cin >> numDiscounts;

    double discounts[numDiscounts];
    for (int i = 0; i < numDiscounts; ++i) {
        std::cin >> discounts[i];
    }
    
    std::cout << shoppingList(prices, numItems, discounts) << std::endl;
    return 0;
}