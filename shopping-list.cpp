```cpp
#include <iostream>
using namespace std;

float shoppingList(float prices[], int nPrices, float discounts[]) {
    float total = 0;
    for (int i = 0; i < nPrices; i++) {
        total += prices[i] * (1 - discounts[i] / 100.0f);
    }
    return total;
}

int main() {
    int pricesSize = 3; // The size of the prices array.
    float prices[] = {10.99f, 5.99f, 7.99f};
    float nPrices = static_cast<float>(pricesSize); // Convert integer to float
    float discounts[] = {20.0f, 15.0f, 30.0f};
    float nDiscounts = static_cast<float>(3); // Convert integer to float

    float result = shoppingList(prices, nPrices, discounts);

    cout << "Total price after discount: $" << result << endl;

    return 0;
}