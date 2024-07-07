def shopping_list():
    n = int(input())
    total_price = 0
    for _ in range(n):
        prices = list(map(float, input().split()))
        discounts = list(map(float, input().split()))
        total_price += sum(p - (p * d / 100) for p, d in zip(prices, discounts))
    return round(total_price, 2)