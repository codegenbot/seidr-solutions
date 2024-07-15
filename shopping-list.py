def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()[:n]))
    discounts = list(map(float, input().split()[:n]))
    total_price = 0
    for i in range(min(len(prices), len(discounts))):
        total_price += (1 - discounts[i] / 100) * prices[i]
    return format(total_price, ".1f")


print(shopping_list())