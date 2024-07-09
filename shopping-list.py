```
def shopping_list():
    n = int(input())
    prices = list(map(float, (x.strip() for x in input().split())))
    discounts = list(map(float, (x.strip() for x in input().split())))
    total = sum(price - (price * discount / 100.0) for price, discount in zip(prices, discounts))
    return "{:.2f}".format(total).replace(".", "")