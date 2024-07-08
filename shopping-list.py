def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(lambda x: float(x)/100, input().split()))
    total_price = 0.0
    for i in range(n):
        total_price += prices[i] * (1 - discounts[0])
    return round(total_price,2)