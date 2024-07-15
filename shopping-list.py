```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = [float(i) / 100 for i in map(float, input().split()) for _ in range(n)]
    total_price = sum((1 - d) * p for p, d in zip(prices, discounts))
    return format(total_price, ".1f")
print(shopping_list())