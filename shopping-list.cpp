int shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0;
    for (size_t i = 0; i < prices.size(); ++i) {
        total += prices[i] * (1 - discounts[i] / 100);
    }
    return total;
}