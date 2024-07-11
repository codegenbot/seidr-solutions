```
def shopping_list():
    n = int(input())
    prices, discounts = [float(x) for x in input().split()] * n, [float(x) for x in input().split()] * n
    
    total_price = 0
    for i in range(n):
        price = prices[i] - (prices[i] * discounts[i] / 100)
        if price >= 0:
            total_price += price

    return total_price


print(shopping_list())