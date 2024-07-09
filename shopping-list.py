```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = 0
    for price, discount in zip(prices, discounts):
        total_price += round(price * (1 - discount / 100), 1)

    return str(total_price)


print(shopping_list())