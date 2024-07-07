#include <iostream>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += prices[i] * (1 - discounts[i]);
    }
    return total;
}

int main() {
    std::vector<float> prices = {50.0, 100.0};
    std::vector<float> discounts = {10.0, 20.0};
    const auto max_capacity = std::vector<float>::max_size();
    std::cout << "Maximum capacity: " << max_capacity << std::endl;
    std::cout << shoppingList(prices, discounts) << std::endl;
    return 0;
}