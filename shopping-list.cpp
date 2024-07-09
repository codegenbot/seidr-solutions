#include <iostream>
#include <iomanip>

float shoppingList(float prices[], float discounts[], int numPrices) {
    float total = 0;
    for(int i = 0; i < numPrices; i++) {
        total += (1 - (discounts[i]/100)) * prices[i];
    }
    return total;
}

int main() {
    float prices[] = {10.99f, 5.50f, 23.75f};
    float discounts[] = {20.00f, 15.00f, 10.00f};
    int numPrices = sizeof(prices) / sizeof(prices[0]);
    
    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts, numPrices) << std::endl;
}