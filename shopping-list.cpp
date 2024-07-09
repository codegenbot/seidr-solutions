```
#include <iostream>

float shoppingList(float* prices, float* discounts) {
    float total = 0;
    for (int i = 0; i < 5; i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}