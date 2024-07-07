double shoppingList(vector<double> prices, vector<double> discounts) {
    double total = 0;
    for(int i = 0; i < prices.size(); i++) {
        double price = prices[i] * (1 - discounts[i]/100);
        if(price < 0) price = 0;
        double roundedPrice = std::round(price * 100.0) / 100.0;
        total += roundedPrice;
    }
    return total;
}