def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    if len(prices) != n:
        return 
    discounts = list(map(float, input().split()))
    if len(discounts) != n:
        return 
    total_price = 0
    for i in range(n):
        total_price += (1 - discounts[i] / 100) * prices[i]
    return round(total_price, 2)


print(shopping_list())