def shopping_list(prices, discounts):
    return sum([p * (1 - d) if p > d else 0 for p, d in zip(prices, discounts)])