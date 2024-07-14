```
def shopping_list():
    n = int(input())
    prices = []
    discounts = []

    for _ in range(n):
        price = float(input())
        discounts.append(float(input()) / 100)

    total_price = sum([price * (1 - d) for price, d in zip(prices, discounts)])

    return str(total_price).format(".2f")