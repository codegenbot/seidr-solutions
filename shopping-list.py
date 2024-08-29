def shopping_list():
    n = int(input())
    prices = [float(x) for x in input().split()]
    discounts = [float(x) for x in input().split()]
    total_price = sum(p * (1 - d / 100) for p, d in zip(prices, discounts))
    return format(total_price, ".6f")


print(shopping_list())