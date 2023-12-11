def get_total_price(prices, discounts):
    return sum(p - (p * d / 100) for p, d in zip(prices, discounts))