```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = round(sum((1 - discount/100) * price for price, discount in zip(prices, discounts)), 2)

    return total_price


print(shopping_list())