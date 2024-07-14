```
def shopping_list():
    n = int(input())
    total_price = 0

    for _ in range(n):
        line = input().split()
        price = float(line[0])
        discount = float(line[1]) / 100
        total_price += price * (1 - discount)

    return format(total_price, ".2f")

print(shopping_list())