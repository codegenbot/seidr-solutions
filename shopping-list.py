```
def shopping_list():
    n = int(input())
    total_price = 0
    for i in range(n):
        price = float(input())
        discount = float(input())
        total_price += price * (1 - discount / 100)
    return total_price