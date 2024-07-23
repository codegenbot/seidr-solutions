total_price = 0;
for (int i = 0; i < prices.size(); ++i) {
    total_price += prices[i] * (1 - (discounts[i] / 100.0));
}