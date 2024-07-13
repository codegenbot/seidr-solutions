```Python
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    _, discounts = input().split(), list(map(float, input().split()))
    total_price = 0.0
    for i in range(n):
        total_price += prices[i] * (1 - discounts[i]/100)
    return round(total_price, 2)