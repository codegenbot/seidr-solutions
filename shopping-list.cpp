#include <iostream>

namespace std {
}

float shoppingList(float prices[], int nPrices, float discounts[]) {
    float total = 0;
    for (int i = 0; i < nPrices; i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    int nItems;
    float price, discount;

    std::cin >> nItems;
    float prices[nItems];
    float discounts[nItems];

    for (int i = 0; i < nItems; i++) {
        std::cin >> price >> discount;
        prices[i] = price;
        discounts[i] = discount / 100.0f; 
    }

    float result = shoppingList(prices, nItems, discounts);

    std::cout << "Total price after discount: $" << result << std::endl;

    return 0;
}