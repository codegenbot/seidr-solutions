def shopping_list():
    n = int(input())
    prices = [float(x) for x in input().split()]
    discount = [float(x) for x in input().split()]

    total_price = 0
    for i in range(n):
        total_price += (1 - discount[i] / 100) * prices[i]

    return round(total_price, 2)


print(shopping_list())