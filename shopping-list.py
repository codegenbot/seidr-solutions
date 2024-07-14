def shopping_list():
    n = int(input())
    prices = []
    discounts = []

    for _ in range(n):
        price = float(input())
        prices.append(price)
        discounts.append(float(input()) / 100)

    total_price = sum([price * (1 - d) for price, d in zip(prices, discounts)])

    return format(total_price, ".2f")