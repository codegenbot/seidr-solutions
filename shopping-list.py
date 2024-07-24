def shopping_list():
    prices_discounts = [float(x) for x in input().split()]
    n = len(prices_discounts)

    prices = prices_discounts[: n // 2]
    discounts = [x / 100 for x in prices_discounts[n // 2 :]]

    total_price = sum(
        price * (1 - discount) for price, discount in zip(prices, discounts)
    )

    return "{:.2f}".format(total_price)