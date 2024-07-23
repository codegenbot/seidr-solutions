for i in range(n):
    if i < len(prices) and i < len(discounts):
        price = prices[i] * (1 - discounts[i] / 100)
        total_price += price
return round(total_price, 2)