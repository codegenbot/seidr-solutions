def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = sum(p - (p * d / 100) for p, d in zip(prices, discounts))
    return "{:.1f}".format(total_price)


print(shopping_list())