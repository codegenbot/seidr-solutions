    double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        totalPrice += prices[i] * (1 - discounts[i]);
    }
    return totalPrice;
}