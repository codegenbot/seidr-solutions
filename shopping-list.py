def shopping_list():
    n = int(input())
    prices = list(map(float, (input().split())[1:]))
    discounts = list(map(float, (input().split())[1:]))

    total_price = 0
    for i in range(n):
        price = prices[i] * (1 - discounts[i] / 100)
        total_price += price
    return format(total_price, ".2f")