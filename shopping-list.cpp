#include <iostream>
#include <vector>
#include <numeric>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    return std::accumulate(prices.begin(), prices.end(), 0.0, [&](double sum, float price) {
        auto it = std::next(&prices[0], std::distance(&price, prices.data()));
        return sum + price * (1 - discounts[std::distance(it, discounts.begin())]);
    });
}

int main() {
    std::vector<float> prices = {50.0, 100.0};
    std::vector<float> discounts = {10.0, 20.0};
    std::cout << shoppingList(prices, discounts) << std::endl;
    return 0;
}