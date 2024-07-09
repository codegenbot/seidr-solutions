def shopping_list():
    n = int(input())
    prices = list(map(float, (x.strip() for x in input().split())))
    discounts = list(map(float, (x.strip() for x in input().split())))
    return "{:.2f}".format(sum(price - (price * discount / 100.0) for price, discount in zip(prices, discounts)))