// Initialize total_price before the loop
float total_price = 0.0;
// Update total_price inside the loop
total_price += prices[i] * (1 - (discounts[i] / 100.0));