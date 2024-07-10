def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = 0
    for price, discount in zip(prices, discounts):
        total_price += price - (price * (100 - discount) / 100)

    return format(total_price, ".1f")

print(shopping_list())