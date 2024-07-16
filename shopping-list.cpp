```c++
#include <cstdio>

float shoppingList(float prices[], int nPrices, float discounts[]) {
    float total = 0;
    for (int i = 0; i < nPrices; i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    float prices[] = {10.99f, 5.99f, 7.99f};
    int nPrices = sizeof(prices) / sizeof(prices[0]);
    float discounts[] = {0.05f, 0.1f, 0.08f};
    float totalPrice = shoppingList(prices, nPrices, discounts);
    printf("Total price: %f\n", totalPrice); 
    return 0;
}