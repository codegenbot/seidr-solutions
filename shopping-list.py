def total_price(prices, discounts):
    return sum(
        price - (price * discount / 100) for price, discount in zip(prices, discounts)
    )