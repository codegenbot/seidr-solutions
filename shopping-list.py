```
def shopping_list():
    n = int(input())
    total_price = 0
    for _ in range(n):
        price_discounts = list(map(float, input().split()))
        total_price += price_discounts[0] * (1 - (price_discounts[1] / 100))
    return format(total_price, ".2f")

print(shopping_list())