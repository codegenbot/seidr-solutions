for (int i = 0; i < n; ++i) {
    total_price += prices[i] * (1.0 - discounts[i] / 100);
}