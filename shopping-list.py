```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(int, input().split()))

    total_price = sum(
        price * (1 - d / 100) for price, d in zip(prices, discounts)
    )

    return "{:.2f}".format(total_price)