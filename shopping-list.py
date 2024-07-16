```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = [0] * n
    for i in range(n):
        discounts[i] = float(input()) / 100
    total_price = sum(price * (1 - discount) for price, discount in zip(prices, discounts))
    print("{:.1f}".format(total_price))