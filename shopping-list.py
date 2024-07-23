```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(lambda x: float(x) / 100, input().split()))
    total_price = 0
    for i in range(n):
        price = prices[i] * (1 - discounts[i])
        total_price += price
    print("{:.2f}".format(total_price))