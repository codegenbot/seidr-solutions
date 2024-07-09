double shoppingList(vector<float> prices, vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = (discounts[i] / 100.0);
        total += price * (1 - discount); 
    }
    return total;
}