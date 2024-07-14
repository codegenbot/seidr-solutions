```
def shopping_list():
    n = int(input())
    total_price = 0

    for _ in range(n):
        items = input().split()
        total_price_item = sum(map(float, items))
        total_discount = float(input()) / 100
        total_price += total_price_item * (1 - total_discount)
        print(total_price, end=' ')
        total_price = 0

    return format(total_price, ".2f")

print(shopping_list())