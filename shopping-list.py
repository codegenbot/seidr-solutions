total_price = 0
for i in range(n):
    if i < len(prices) and i < len(discounts): 
        price = max(0, prices[i] - (prices[i] * (discounts[i] / 100)))
        total_price += round(price, 2)

print(total_price)