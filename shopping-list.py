```Python
def shopping_list():
    n = int(input())
    prices, _ = [float(x) for x in input().split()], [float(x) for x in input().split()[:n]]

    total_price = 0
    for i in range(n):
        price = prices[i] - (prices[i] * float(discounts[i]) / 100)
        if price >= 0:
            total_price += price

    return total_price


print(shopping_list())