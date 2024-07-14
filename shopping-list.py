def shopping_list():
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    quantities = list(map(int, input().split()))
    return round(sum(p * q for p, q in zip(prices, quantities)) - sum((p * d / 100) for p, d in zip(prices, discounts)), 2)

print(shopping_list())