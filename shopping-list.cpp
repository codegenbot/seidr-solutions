#include <iostream>
#include <vector>
#include <numeric>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    return std::accumulate(prices.begin(), prices.end(), 0.0,
        [&](double sum, float price) { return sum + price * (1 - discounts[0]); });
}

int main() {
    std::vector<float> prices = {50.0, 100.0};
    std::vector<float> discounts = {10.0, 20.0};
    std::cout << shoppingList(prices, discounts) << std::endl;
    return 0;
}