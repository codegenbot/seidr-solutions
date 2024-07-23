float total = 0.0;
for (float price : prices) {
    total += price * (1.0 - discounts[&price - &prices[0]] / 100.0);
}
return total;