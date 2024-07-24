def shopping_list(prices, discounts):
    total_price = 0.0
    for i in range(len(prices)):
        total_price += (1 - discounts[i] / 100) * prices[i]
    return round(total_price, 2)