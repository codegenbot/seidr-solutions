float calculateTotalPrice(std::vector<float> prices, std::vector<float> discounts) {
    float totalPrice = 0.0;
    for (int i = 0; i < prices.size(); i++) {
        float discount = discounts[i] / 100.0; 
        float discountedPrice = prices[i] * (1 - discount); 
        totalPrice += discountedPrice;
    }
    return totalPrice;
}