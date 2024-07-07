#include <iostream>
#include <vector>
#include <numeric>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    return std::accumulate(prices.begin(), prices.end(), 0.0, [&](double sum, float price) {
        return sum + price * (1 - discounts[static_cast<std::iterator_traits<decltype(prices)>::difference_type>(std::next(&price, std::distance(prices.data(), price)), prices.end()))]);
    });
}

int main() {
    std::vector<float> prices = {50.0, 100.0};
    std::vector<float> discounts = {10.0, 20.0};
    const auto max_capacity = std::vector<float>::max_size();
    std::cout << "Maximum capacity: " << max_capacity << std::endl;
    std::cout << shoppingList(prices, discounts) << std::endl;
    return 0;
}