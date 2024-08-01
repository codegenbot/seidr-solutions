def shopping_list():
    n = int(input())
    prices = [float(x) for x in input().split()]
    discounts = [float(x) for x in input().split()]
    total_price = sum(prices[i] * (1 - discounts[i] / 100) for i in range(n))
    return format(total_price, ".6f")


print(shopping_list())