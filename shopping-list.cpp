double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        if(discounts[i] > 0) {
            total += prices[i] * (1 - (discounts[i] / 100.0));
        } else {
            total += prices[i];
        }
    }
    return total;
}