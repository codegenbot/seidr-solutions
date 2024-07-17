def shopping_list():
    n = int(input())
    prices = [float(x) for x in input().split()]
    discounts = [float(x) for x in input().split()]
    total_price = 0
    for i in range(n):
        price = prices[i] - (prices[i] * discounts[i] / 100)
        if price < 0:
            price = 0
        total_price += price
    return "{:.1f}".format(total_price)


print(shopping_list())