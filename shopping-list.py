```
def shopping_list():
    n = int(input())
    total_price = 0
    
    for price, discount in zip(map(float, input().split()), [float(input()) / 100 for _ in range(n)]):
        total_price += price * (1 - discount)
    
    return format(total_price, ".2f")