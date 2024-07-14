```
def shopping_list():
    n = float(input())
    total_price = 0

    for _ in range(int(n)):
        item_prices = [float(price) for price in input().split()]
        item_discount = float(input()) / 100
        subtotal = sum(item_prices) * (1 - item_discount)
        total_price += subtotal

    print(format(total_price, ".2f"))

shopping_list()