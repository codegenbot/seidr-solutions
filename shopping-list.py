```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(lambda x: float(x) / 100, input().split()))

    total_price = round(sum(prices), 2)
    for p, d in zip(prices, discounts):
        total_price -= p - (p * d / 100)

    return total_price

print(shopping_list())