def shopping_list(prices, discounts):
    return sum(
        price - (price * discount / 100) for price, discount in zip(prices, discounts)
    )