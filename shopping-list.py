```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(int, input().split()))
    total_price = sum((price * (1 - discount / 100.0)) for price, discount in zip(prices, discounts))
    print("{:.2f}".format(round(total_price, 2)))