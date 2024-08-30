```
def shopping_list():
    n = int(input())
    prices = [float(x) for x in input().split()]
    discounts = [float(x) for x in input().split()]
    total_price = sum(p - p * d / 100 for p, d in zip(prices, discounts))
    return total_price

print(shopping_list())