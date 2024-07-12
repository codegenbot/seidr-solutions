def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = 0
    for i in range(min(n, len(prices))):
        total_price += min(1, max(0, 1 - (float(discounts[i]) / 100))) * prices[i]

    return round(total_price, 1)

print(shopping_list())