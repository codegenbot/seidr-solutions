```
def shopping_list():
    n = int(input())
    total_price = 0
    total_discount = 0

    for _ in range(n):
        item_prices = [float(price) for price in input().split()]
        total_price += sum(item_prices)
        discount = float(input()) / 100

    total_discount = total_price * (1 - discount)
    print(format(total_discount, ".2f"))

shopping_list()