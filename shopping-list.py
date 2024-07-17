Here is the solution:

def shopping_list(prices, discounts):
    total_price = sum([p - (p * d / 100) for p, d in zip(prices, discounts)])
    return total_price