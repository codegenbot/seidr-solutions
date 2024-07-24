double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double remaining = 1.0 - discounts[i] / 100.0; // apply discount to original price
        total += prices[i] * remaining;
    }
    return total;
}