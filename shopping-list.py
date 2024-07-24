```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0
    for price, discount in zip(prices, discounts):
        total_price += (1 - discount / 100) * price
    return round(total_price, 2)


print(shopping_list())