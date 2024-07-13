def shopping_list(prices, discounts):
    total = 0.0
    for i in range(len(prices)):
        discounted_price = prices[i] * (1 - discounts[i] / 100)
        total += discounted_price
    return total