```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = [float(i) / 100 for i in input() for _ in range(n)]
    total_price = 0
    for i in range(n):
        total_price += (1 - discounts[i]) * prices[i]
    return format(total_price, ".1f")


print(shopping_list())