float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discountAmount = prices[i] * discounts[i] / 100.0;
        float discountedPrice = prices[i] - discountAmount;
        totalPrice += discountedPrice;
    }
    return totalPrice;
}