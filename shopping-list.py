```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discount = float(input())
    total_price = sum(price * (1 - discount / 100.0) for price in prices)
    print("%.2f" % total_price)