def shopping_list(prices, discounts):
    total = 0
    for i in range(len(prices)):
        total += (prices[i] - (discounts[i] / 100) * prices[i])
    return total