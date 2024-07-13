```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0.0
    for i in range(min(n, len(prices))):
        total_price += prices[i] * (1 - discounts[i] / 100)
    return float("%.2f" % total_price)


print(shopping_list())