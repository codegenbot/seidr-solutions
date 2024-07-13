```cpp
#include <vector>
#include <cmath>
#include <iostream>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] - (prices[i] * (discounts[i] / 100.0f));
    }
    return total;
}

int main() {
    std::vector<float> prices(3);
    prices[0] = 10.0f; prices[1] = 20.0f; prices[2] = 30.0f;

    std::vector<float> discounts(3);
    discounts[0] = 5.0f; discounts[1] = 7.0f; discounts[2] = 3.0f;

    double result = shoppingList(prices, discounts);
    std::cout << "Total price after discount: " << result << "\n";

    return 0;
}