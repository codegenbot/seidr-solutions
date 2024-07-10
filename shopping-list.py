def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0.0
    for price, discount in zip(prices, discounts):
        discounted_price = price - (price * discount / 100)
        total_price += discounted_price
    return round(total_price, 1)


print(shopping_list())