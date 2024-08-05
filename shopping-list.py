def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total = 0
    for i in range(n):
        price = prices[i]
        discount = (price * discounts[i]) / 100
        total += price - discount

    return format(total, ".1f")


print(shopping_list())