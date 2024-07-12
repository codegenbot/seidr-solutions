def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(lambda x: float(x) / 100, input().split()))

    total_price = round(sum(p - (p * d) for p, d in zip(prices, discounts)), 1)
    return total_price

print(shopping_list())