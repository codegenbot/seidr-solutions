```
def shopping_list():
    n = int(input())
    total_price = 0
    for i in range(n):
        prices = list(map(float, input().split()))
        discounts = list(map(float, input().split()))
        for j in range(n):
            total_price += (1 - discounts[j] / 100) * prices[j]
    return format(total_price, ".1f")


print(shopping_list())