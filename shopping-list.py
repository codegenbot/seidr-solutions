def shopping_list():
    n = int(input())
    total_price = 0
    for i in range(n):
        price, discount = map(float, input().split())
        total_price += (1 - discount / 100) * price
    return round(total_price, 2)