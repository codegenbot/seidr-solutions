```cpp
#include <vector>
#include <cmath>
#include <iostream>

double shoppingList(float* prices, float* discounts, int priceCount, int discountCount) {
    double total = 0;
    for (int i = 0; i < priceCount; i++) {
        total += prices[i] - (prices[i] * (discounts[i] / 100.0));
    }
    return total;
}

int main() {
    float prices[] = {10.0f, 20.0f, 30.0f};
    float discounts[] = {5.0f, 7.0f, 3.0f};

    double result = shoppingList(&prices[0], &discounts[0], sizeof(prices) / sizeof(prices[0]), sizeof(discounts) / sizeof(discounts[0]));
    std::cout << "Total price after discount: " << result << "\n";

    return 0;
}