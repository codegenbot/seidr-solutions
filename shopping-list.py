def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0
    for i in range(n):
        total_price += (1 - discounts[i] / 100) * prices[i]
    return format(total_price, ".6f")


print(shopping_list())