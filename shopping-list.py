def shopping_list():
    n = int(input())
    total_price = 0
    for _ in range(n):
        price, discount = map(float, input().split())
        total_price += price * (1 - discount/100)
    return "{:.2f}".format(total_price)