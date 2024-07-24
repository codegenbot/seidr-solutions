def shopping_list(prices, discounts):
    total_price = sum(p * (1 - d / 100) for p, d in zip(prices, discounts))
    return round(total_price, 2)