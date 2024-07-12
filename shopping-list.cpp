for (int i = 0; i < n; ++i) {
    total_price += prices[i] * (100.0 - discounts[i]) / 100.0;
}