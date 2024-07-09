```
#include <iostream>
#include <vector>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1 - discounts[i]/100.0);
    }
    return total;
}

int main() {
    std::vector<float> prices = {10.0, 20.0, 30.0};
    std::vector<float> discounts = {5.0, 15.0, 25.0};

    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;

    return 0;
}