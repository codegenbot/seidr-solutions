#include <iostream>
#include <vector>
#include <numeric>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    return std::accumulate(prices.begin(), prices.end(), 0.0,
        [&](double sum, float price) { return sum + price * (1 - discounts[std::distance(std::next(&prices[0], std::distance(&price, prices.data())), prices.end()]); });
}

int main() {
    constexpr int prices_size = sizeof(prices) / sizeof(float);
    constexpr int discounts_size = sizeof(discounts) / sizeof(float);
    std::vector<float> prices(prices_data, prices_data + prices_size);
    std::vector<float> discounts(discounts_data, discounts_data + discounts_size);
    std::cout << shoppingList(prices, discounts) << std::endl;
    return 0;
}