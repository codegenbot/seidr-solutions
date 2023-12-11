def shopping_list(prices, discounts):
    total = 0
    for i in range(len(prices)):
        total += (prices[i] * (1 - discounts[i]))
    return total