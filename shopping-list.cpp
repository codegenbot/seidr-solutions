for (int i = 0; i < prices.size(); ++i) {
    float discount_amount = prices[i] * (discounts[i] / 100.0f);
    total_price_after_discount += prices[i] - discount_amount;
}