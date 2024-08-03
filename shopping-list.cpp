float total = 0.0f;
for (int i = 0; i < n; ++i) {
    total += prices[i] - (discounts[i] / 100.0f) * prices[i];
}