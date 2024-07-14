def total_price(prices, discounts):
    return sum(p * (1 - d / 100) for p, d in zip(prices, discounts))