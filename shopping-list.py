```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = round(sum(p * (1 - d/100) for p, d in zip(prices, discounts)), 1)
    return total_price

print(shopping_list())