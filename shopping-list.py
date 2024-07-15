```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input() for _ in range(n))) / 100
    total_price = sum((1 - d) * p for p, d in zip(prices, discounts))
    return format(total_price, ".1f")


print(shopping_list())