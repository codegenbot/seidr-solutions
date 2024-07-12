```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()[:n-1]))
    discounts = list(map(float, input().split()[:n-1]))

    total_price = 0
    for i in range(n):
        total_price += prices[i-1] - (prices[i-1] * discounts[i-1] / 100)

    return round(total_price, 1)


print(shopping_list())