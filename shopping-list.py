def shopping_list():
    n = int(input())
    item_prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0.0
    for i in range(n):
        total_price += item_prices[i] * (1 - discounts[i] / 100)
    print(format(total_price, ".2f"))