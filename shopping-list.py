```
def shopping_list():
    num_items = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = sum((1 - (d/100)) * p for p, d in zip(prices, discounts))

    return format(total_price, ".2f")


print(shopping_list())