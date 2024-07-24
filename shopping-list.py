def total_price(prices, discounts):
    return sum(
        price * (1 - discount / 100) for price, discount in zip(prices, discounts)
    )