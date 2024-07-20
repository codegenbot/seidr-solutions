def shopping_list():
    n = int(input())
    prices, discounts = [float(x) for x in input().split()], [float(x) for x in input().split()]
    total_price = 0
    for price, discount in zip(prices, discounts):
        total_price += price * (1 - discount / 100)
    return round(total_price, 2)