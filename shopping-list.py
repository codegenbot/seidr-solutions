def shopping_list():
    n = int(input())
    total_price = 0
    for _ in range(n):
        price, discount = map(float, input().split())
        total_price += price * (1 - discount / 100)
    return format(total_price, ".2f")


print(shopping_list())