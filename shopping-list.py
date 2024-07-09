```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = sum("{:.2f}".format(price - (price * discount / 100.0)) for price, discount in zip(prices, discounts))
    return "{:.2f}".format(total_price)

print(shopping_list())