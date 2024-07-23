float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        float discounted_price = prices[i] - (prices[i] * discounts[i] / 100.0);
        total += discounted_price;
    }
    return total;
}