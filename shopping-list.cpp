double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += (1 - discounts[i] / 100.0f) * prices[i];
    }
    return total;
}