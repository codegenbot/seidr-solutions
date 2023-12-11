def shopping_list(prices, discounts):
    return sum((1 - d / 100) * p for p, d in zip(prices, discounts))