```
def shopping_list():
    n = min(int(input()), len(input().split()))
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0
    for i in range(n):
        price = prices[i] * (1 - discounts[i] / 100)
        total_price += price
    return format(total_price, ".6f")


print(shopping_list())