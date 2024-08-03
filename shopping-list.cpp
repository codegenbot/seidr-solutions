float total = 0.0f;
for (int i = 0; i < prices.size(); i++)
{
    total += prices[i] * (1 - discounts[i] / 100.0f);
}
return total;