def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total = sum(price - (price * discount / 100.0) for price, discount in zip(prices, discounts))
    return "{:.2f}".format(int(float(total) * 100) / 100).replace(".", "")