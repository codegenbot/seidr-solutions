```cpp
#include <cmath>

int shoppingList(float* prices, int nPrices, float* discounts) {
    float total = 0.0;
    for (int i = 0; i < nPrices; i++) {
        total += prices[i] * (1 - discounts[i]/100.0);
    }
    return static_cast<int>(std::round(total));
}