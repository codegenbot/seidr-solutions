def shopping_list(prices, discounts):
    return sum((p - (p * d / 100)) for p, d in zip(prices, discounts))