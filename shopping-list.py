def shopping_list():
    n = int(input())
    prices, discounts = [float(x) for x in input().split()], [float(x) for x in input().split()]

    total_price = 0
    for p, d in zip(prices, discounts):
        total_price += (1 - d / 100) * p

    return round(total_price, 1)

print(shopping_list())