def shopping_list(prices, discounts):
    total_price = 0.0
    for i in range(len(prices)):
        discounted_price = prices[i] * (1 - discounts[i] / 100)
        total_price += discounted_price
    return round(total_price, 1)