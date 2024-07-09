double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        total += price * (1 - discounts[i]/100);
    }
    return total;
}