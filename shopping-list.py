```
def shopping_list():
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    quantities = list(map(int, input().split()))
    return round(sum(p * q * (1 - d/100) for p, q, d in zip(prices, quantities, discounts)), 2)

print(shopping_list())