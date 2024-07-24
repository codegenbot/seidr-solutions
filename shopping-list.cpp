float calculateTotalPrice(const vector<float>& prices, const vector<float>& discounts) {
    float total_price = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        total_price += prices[i] * (1 - (discounts[i] / 100.0));
    }
    return total_price;
}