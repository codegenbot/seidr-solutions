#include <iostream>
#include <vector>
#include <numeric_limits>

double shoppingList(const std::array<float, 2>& prices, const std::array<float, 2>& discounts) {
    return std::accumulate(prices.begin(), prices.end(), 0.0, [&](double sum, float price) {
        return sum + price * (1 - discounts[static_cast<size_t>(std::distance(std::next(&price, prices.data()), prices.end()))]);
    });
}

int main() {
    std::array<float, 2> prices = {50.0f, 100.0f};
    std::array<float, 2> discounts = {10.0f, 20.0f};
    const auto max_capacity = std::numeric_limits<float>::max();
    std::cout << "Maximum capacity: " << max_capacity << std::endl;
    double total_cost = shoppingList(prices, discounts);
    std::cout << "Total cost after discounts: " << total_cost << std::endl;
    return 0;
}