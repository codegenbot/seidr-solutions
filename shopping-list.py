def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(lambda x: float(x) / 100, map(int, input().split())))
    total_price = 0
    for i in range(n):
        total_price += (1 - discounts[i]) * prices[i]
    return round(total_price, 1)