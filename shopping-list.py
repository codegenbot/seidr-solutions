def shopping_list(prices, discounts):
    total = 0
    for price, discount in zip(prices, discounts):
        total += price * (1 - discount)
    return total