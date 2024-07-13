double shoppingList(vector<double>& prices, vector<double>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); i++) {
        double price = prices[i];
        double discount = discounts[i] / 100.0; // Convert percent to decimal
        double discountedPrice = price * (1 - discount);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}