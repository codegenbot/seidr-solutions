def shopping_list(prices, discounts):
    total_price = sum(
        [price - (price * discount / 100) for price, discount in zip(prices, discounts)]
    )
    return round(total_price, 1)