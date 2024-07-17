def shopping_list():
    n = int(input())
    prices = [float(x) for x in input().split()]
    discounts = [float(x) for x in input().split()]
    total_price = 0
    for price, discount in zip(prices, discounts):
        discounted_price = price * (1 - discount / 100)
        total_price += discounted_price
    return round(total_price, 2)


print(shopping_list())