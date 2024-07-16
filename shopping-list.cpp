float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    float total = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        total += prices[i] - prices[i] * discounts[i] / 100.0;
    }
    return total;
}