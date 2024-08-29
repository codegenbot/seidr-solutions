```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = sum(format(p - (p * d / 100), ".2f") for p, d in zip(prices, discounts))

    return format(total_price, ".2f")