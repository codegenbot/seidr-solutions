double shoppingList(vector<double> prices, vector<double> discounts, int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += (int)((prices[i] * (1 - discounts[i] / 100.0)) * 100 + 0.5);
    }
    return total;
}