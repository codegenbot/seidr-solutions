double shoppingList(std::vector<float> prices, std::vector<float> discounts) {
    double total = 0;
    double totalDiscount = 0;
    
    for (int i = 0; i < prices.size(); i++) {
        double originalPrice = prices[i];
        double discountAmount = originalPrice * (discounts[i]/100.0);
        total += originalPrice - discountAmount;
        totalDiscount += discountAmount;
    }
    
    return total;
}