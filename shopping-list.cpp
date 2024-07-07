```
double shoppingList(vector<double> prices, vector<double> discounts) {
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        double price = prices[i] - (prices[i] * discounts[i]/100);
        if(price < 0) price = 0;
        total += price;
    }
    return total;
}