def shopping_list(prices, discounts):
    total_price = sum(
        price * (1 - discount / 100) for price, discount in zip(prices, discounts)
    )
    return total_price