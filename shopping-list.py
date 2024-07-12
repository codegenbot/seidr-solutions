def shopping_list():
    n = int(input())
    prices_and_discounts = [list(map(float, input().split())) for _ in range(n)]
    prices, discounts = zip(*prices_and_discounts)
    total_price = 0
    for i in range(n):
        total_price += (1 - discounts[i] / 100) * prices[i]
    return round(total_price, 6)