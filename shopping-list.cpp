float calculateTotalPrice(vector<float> prices, vector<float> discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); ++i) {
        totalPrice += prices[i] * (1.0 - discounts[i] / 100.0);
    }
    return totalPrice;
}