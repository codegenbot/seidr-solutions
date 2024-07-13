float total_price = 0.0;
for (int i = 0; i < prices.size(); ++i) {
    total_price += prices[i] * (1 - discounts[i] / 100);
}
total_price = std::round(total_price * 100) / 100.0;