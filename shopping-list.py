```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = 0
    for p, d in zip(map(float, input().split()), map(float, input().split())):
        total_price += (1 - d / 100) * p

    return round(total_price, 2)

print(shopping_list())