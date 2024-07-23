```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(int, input().split()))
    total_price = sum((price * (1 - discount/100)) for price, discount in zip(prices, map(lambda x: x/100, discounts)))
    print("{:.2f}".format(total_price))