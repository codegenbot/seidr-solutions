def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0
    for i in range(n):
        if prices[i] >= 1:
            price = (prices[i] * (1 - discounts[i] / 100))
        else:
            price = prices[i]
        total_price += price
    print("{:.2f}".format(total_price))