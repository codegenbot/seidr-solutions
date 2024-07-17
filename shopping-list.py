```
def shopping_list():
    n = int(input())
    total_price = 0
    for _ in range(n):
        price = float(input())
        discount = float(input())
        total_price += price - (price * discount / 100)
    return format(total_price, ".2f")