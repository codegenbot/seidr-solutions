```
def shopping_list():
    num_items = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = sum(
        price * (1 - discount / 100) for price, discount in zip(prices, discounts)
    )

    return format(total_price, ".2f")