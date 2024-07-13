```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = sum((1 - d / 100) * p for p, d in zip(prices, discounts))
    return round(total_price, 2)

print(shopping_list())