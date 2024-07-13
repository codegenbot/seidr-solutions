def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0
    for i in range(n):
        price = prices[i] - (prices[i] * discounts[i] / 100)
        if price < 0:
            price = 0
        total_price += price
    return round(total_price, 2)


print(shopping_list())