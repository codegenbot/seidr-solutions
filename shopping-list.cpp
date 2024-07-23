double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double discount = prices[i] * (1 - discounts[i] / 100.0);
        total += prices[i] - discount; 
    }
    return total;
}