def shopping_list(prices, discounts):
    return sum([price * (1 - discount) for price, discount in zip(prices, discounts)])