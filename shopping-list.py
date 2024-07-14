def shopping_list():
    n = int(input())
    total_price = 0

    for _ in range(n):
        item_prices = [float(price) for price in input().split()]
        for price in item_prices:
            discount = float(input()) / 100
            total_price += price * (1 - discount)
        print(total_price, end=' ')
        total_price = 0

    return format(total_price, ".2f")

print(shopping_list())