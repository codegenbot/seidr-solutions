#include <iostream>
#include <vector>

double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    return std::accumulate(prices.begin(), prices.end(), 0.0f, [&](float sum, float price) {
        return sum + price * (1 - discounts[static_cast<size_t>(prices.size())]);
    });
}

int main() {
    std::vector<float> prices = {50.0f, 100.0f};
    std::vector<float> discounts = {10.0f, 20.0f};
    double total_cost = shoppingList(prices, discounts);
    std::cout << "Total cost after discounts: " << total_cost << std::endl;
    return 0;
}