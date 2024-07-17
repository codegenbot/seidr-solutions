```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = sum(
        (price * discount) / 100 for price, discount in zip(prices, discounts)
    ) + sum(price for price in prices)

    return format(total_price, ".1f")


print(shopping_list())