```
#include <iostream>
#include <vector>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    std::vector<float> prices = {10, 20, 30};
    std::vector<float> discounts = {0.5, 0.6, 0.7};
    double total = shoppingList(prices, discounts);
    std::cout << "Total price: " << total << std::endl;
    return 0;
}
```
