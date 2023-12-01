float calculateTotalPrice(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float totalPrice = 0.0;
    for (size_t i = 0; i < prices.size(); i++) {
        float discountedPrice = prices[i] - (prices[i] * (discounts[i] / 100));
        totalPrice += discountedPrice;
    }
    return totalPrice;
}