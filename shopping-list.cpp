#include <iostream>
#include <vector>

float shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1 - discounts[i] / 100.0f);
    }
    return total;
}

int main() {
    std::vector<float> prices = {10.5, 8.25, 12.75};
    std::vector<float> discounts = {20, 15, 18};
    std::cout << std::fixed << std::setprecision(2) << shoppingList(prices, discounts) << std::endl;
    return 0;
}