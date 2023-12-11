def calculate_discounted_price(prices, discounts):
    return sum([p - (p * d) for p, d in zip(prices, discounts)])