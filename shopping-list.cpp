double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += price - (price * discounts[i] / 100.0);
    }
    return total;
}