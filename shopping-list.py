def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = 0
    for i in range(n-1):
        price = prices[i+1] - (prices[i+1] * discounts[i] / 100)
        if price < 0:
            price = 0
        total_price += price

    return total_price


print(shopping_list())