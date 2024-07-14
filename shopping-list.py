def shopping_list():
    n = int(input())
    total_price = float()

    for _ in range(n):
        item_prices = [float(price) for price in input().split()]
        item_discount = float(input()) / 100
        subtotal = sum(item_prices) * (1 - item_discount)
        total_price += subtotal

    print(format(total_price, ".2f"))

shopping_list()