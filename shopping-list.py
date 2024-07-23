import sys
def shopping_list():
    n = int(sys.stdin.readline())
    prices = list(map(float, sys.stdin.readline().split()))
    discounts = list(map(float, sys.stdin.readline().split()))
    total_price = 0
    for i in range(n):
        price = prices[i] * (1 - discounts[i] / 100)
        total_price += price
    print("{:.2f}".format(total_price))