def get_total_price(prices, discounts):
    return sum([p * (1 - d) for p, d in zip(prices, discounts)])