def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0
    for _ in range(min(n, len(prices), len(discounts))):
        total_price += (1 - min(discounts[:]) / 100) * prices[0]
    return round(total_price, 2)

print(shopping_list())