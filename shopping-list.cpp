```
#include <vector>
#include <iostream>

double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - (discounts[i] / 100.0));
    }
    return total;
}

int main() {
    std::vector<float> prices = {10.99f, 5.99f, 7.99f};
    std::vector<float> discounts = {20.0f, 15.0f, 25.0f};

    double total = shoppingList(prices, discounts);

    std::cout << "The total price after applying the discount is: $" << total << std::endl;

    return 0;
}