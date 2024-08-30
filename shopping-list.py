def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0
    for i in range(n):
        price = prices[i]
        discount = (1 - discounts[i] / 100) * price
        total_price += discount
    return round(total_price, 2)


print(shopping_list())