def shopping_list(prices, discounts):
    total_price = 0.0
    for i in range(len(prices)):
        total_price += prices[i] * (1 - discounts[i] / 100)
    return total_price