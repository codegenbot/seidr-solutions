// Declare variable 'total' outside the loop.
float total = 0.0;

// Change 'return total;' outside the loop block.
// Iterate using range-based for loop over 'prices' and 'discounts' vectors.
for (int i = 0; i < prices.size(); ++i) {
    total += prices[i] * (1.0 - discounts[i] / 100.0);
}
return total; 