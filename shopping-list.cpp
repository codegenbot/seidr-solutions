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
    float prices[] = {10.99f, 5.99f, 7.99f};
    int nPrices = sizeof(prices) / sizeof(prices[0]);
    float discounts[] = {20.0f, 15.0f, 30.0f};

    float result = shoppingList(prices, nPrices, discounts);

    cout << "Total price after discount: $" << result << endl;

    return 0;
}