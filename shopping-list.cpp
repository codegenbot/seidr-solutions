double hoppingList(std::vector<double> prices, std::vector<double> discounts) {
    double total = 0;
    for (int i = 0; i < prices.size(); i++) {
        double discount = 1 - discounts[i]/100;
        total += prices[i] * (1 - discount);
    }
    return total;
}