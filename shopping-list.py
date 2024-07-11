```
def shopping_list():
    n = int(input())
    prices, discounts = [float(x) for x in input().split()], [float(x) for x in input().split()]

    total_price = 0
    for price, discount in zip(prices, discounts):
        discounted_price = price - (price * discount / 100)
        if discounted_price >= 0:
            total_price += discounted_price

    return total_price


print(shopping_list())