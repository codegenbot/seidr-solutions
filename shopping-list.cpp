float total = 0.0;
for (size_t i = 0; i < prices.size(); ++i) {
    total += prices[i] * (1.0 - discounts[i] / 100.0);
}