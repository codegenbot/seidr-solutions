```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = sum(
        [price - (price * discount / 100) if discount != 0 else price for price, discount in zip(prices, discounts)]
    )

    return format(total_price, ".1f")


print(shopping_list())