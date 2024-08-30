def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0
    for i in range(min(n, len(prices), len(discounts))):
        total_price += prices[i] * (1 - discounts[i] / 100)
    return round(total_price, 2)