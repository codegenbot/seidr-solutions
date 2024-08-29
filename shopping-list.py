def shopping_list(prices, discounts):
    total_price = 0.0
    for i in range(len(prices)):
        price = prices[i] * (1 - discounts[i] / 100)
        total_price += price
    return total_price