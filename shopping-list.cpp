float total_price = 0.0;
for (int i = 0; i < n; ++i) {
    total_price += prices[i] - prices[i] * (discounts[i] / 100);
}