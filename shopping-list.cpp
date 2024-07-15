float shoppingList(const std::vector<float>& prices, const std::vector<float>& discounts) {
    float total = 0;
    for (int i = 0; i < prices.size(); i++) {
        float priceAfterDiscount = prices[i] - (prices[i] * discounts[i] / 100);
        total += priceAfterDiscount;
    }
    return total;
}