def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(lambda x: float(x)/100, input().split()))
    total_price = sum(price - (price * discount) for price, discount in zip(prices, discounts))
    return "{:.2f}".format(total_price)