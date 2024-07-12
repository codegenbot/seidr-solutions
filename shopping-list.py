def shopping_list():
    n = int(input())
    prices = [float(x) for x in input().split()]
    discount = [float(x) for x in input().split()]
    total_price = sum(p - p * d / 100 for p, d in zip(prices, discount))
    return format(total_price, ".1f")


print(shopping_list())