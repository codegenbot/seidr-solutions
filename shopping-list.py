```
def shopping_list():
    n = len(map(float, input().split()))
    prices = list(map(float, input().split()))[:n]
    discounts = list(map(float, input().split()))[:n]
    total_price = 0
    for i in range(n):
        total_price += (1 - discounts[i] / 100) * prices[i]
    return round(total_price, 2)

print(shopping_list())