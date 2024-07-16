#include <iostream>

float shoppingList(float prices[], int nPrices, float discounts[]) {
    float total = 0;
    for (int i = 0; i < nPrices; i++) {
        total += prices[i] * (1 - discounts[i] / 100.0f);
    }
    return total;
}

int main() {
    int nItems;
    std::cout << "Enter the number of items: ";
    std::cin >> nItems;

    float* prices = new float[nItems];
    float* discounts = new float[nItems];

    std::cout << "Enter the prices and discounts for each item:\n";
    for (int i = 0; i < nItems; i++) {
        std::cout << "Price and discount for item " << i + 1 << ": ";
        std::cin >> prices[i] >> discounts[i];
    }

    float result = shoppingList(prices, nItems, discounts);

    std::cout << "Total price after discount: $" << result << std::endl;

    delete[] prices;
    delete[] discounts;

    return 0;
}