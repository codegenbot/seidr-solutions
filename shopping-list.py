```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = 0
    for i in range(min(n, len(prices))):
        total_price += prices[i] - (prices[i] * discounts[i] / 100) if i < min(len(discounts), n) else 0

    return round(total_price, 1)

print(shopping_list())