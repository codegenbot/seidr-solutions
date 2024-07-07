double shoppingList(vector<double> prices, vector<double> discounts) {
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        double discountedPrice = prices[i] - (prices[i] * discounts[i]/100);
        if(discountedPrice < 0) discountedPrice = 0;
        total += discountedPrice;
    }
    return total;
}