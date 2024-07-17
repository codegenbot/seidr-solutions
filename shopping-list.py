```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    print("{:.1f}".format(sum([price - (price * d / 100) for price, d in zip(prices, discounts)])))