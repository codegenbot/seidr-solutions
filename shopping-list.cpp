```cpp
#include <vector>
#include <cmath>
#include <iostream>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] - (prices[i] * (discounts[i] / 100.0));
    }
    return total;
}

int main() {
    float prices[] = {10.0f, 20.0f, 30.0f};
    float discounts[] = {5.0f, 7.0f, 3.0f};

    double result = shoppingList(std::vector<float>(prices, prices + sizeof(prices) / sizeof(prices[0])), std::vector<float>(discounts, discounts + sizeof(discounts) / sizeof(discounts[0])));
    std::cout << "Total price after discount: " << result << "\n";

    return 0;
}