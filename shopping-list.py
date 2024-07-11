def shopping_list(prices, discounts):
    total = 0
    for price, discount in zip(prices, discounts):
        discounted_price = price - (price * discount / 100)
        total += discounted_price
    return round(total, 1)