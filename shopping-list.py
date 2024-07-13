```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    if len(prices) != n or len(discounts) != n:
        return float("%.2f" % 0.0)

    total_price = 0.0
    for i in range(min(len(prices), len(discounts))):
        total_price += prices[i] * (1 - discounts[i] / 100)
    return float("%.2f" % total_price)


print(shopping_list())