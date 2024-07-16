double totalPriceAfterDiscount(const vector<float>& prices, const vector<float>& discounts) {
    double totalPrice = 0;
    for (int i = 0; i < prices.size(); ++i) {
        double price = prices[i];
        double discountedPrice = price - (price * discounts[i] / 100.0);
        totalPrice += discountedPrice;
    }
    return totalPrice;
}