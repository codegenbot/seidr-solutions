```
def shopping_list():
    n = int(input())
    total_price = 0.0
    for i in range(n):
        price, discount = map(float, input().split())
        total_price += price * (1 - discount / 100)
    return round(total_price,2) 
print(shopping_list())