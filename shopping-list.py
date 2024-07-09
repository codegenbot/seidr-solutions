```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = []
    for _ in range(n):
        discounts.append(int(input()) / 100)
    total_price = sum(
        price - (price * discount) for price, discount in zip(prices, discounts)
    )
    return "{:.2f}".format(total_price)