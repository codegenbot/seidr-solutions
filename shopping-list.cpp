double shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); ++i) {
        float price = prices[i];
        float discount = discounts[i];
        total += price * (1 - discount);
    }
    return total;
}