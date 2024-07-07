double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    auto casted_prices = std::vector<int>(prices.begin(), prices.end());
    auto casted_discounts = std::vector<int>(discounts.begin(), discounts.end());
    return std::accumulate(casted_prices.begin(), casted_prices.end(), 0, [&](int sum, int price) {
        return sum + price * (1 - casted_discounts[static_cast<size_t>(casted_prices.size())]);
    });
}