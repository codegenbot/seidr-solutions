float shoppingList(vector<float> prices, vector<float> discounts) {
    float total = 0;
    for(int i=0; i<prices.size(); i++) {
        total += prices[i] - (prices[i] * (discounts[i] / 100));
    }
    return total;
}