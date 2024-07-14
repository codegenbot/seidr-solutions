def shopping_list():
    n = int(input())
    prices = [float(x) for x in input().split()]
    discounts = [float(x) for x in input().split()]
    total_price = sum(p * (1 - d / 100) for p, d in zip(prices, discounts))
    return round(total_price, 2)


print(shopping_list())