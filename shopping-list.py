```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = []
    for _ in range(n):
        discounts.append(float(input()))
    total_price = sum(
        price * (1 - discount / 100) for price, discount in zip(prices, discounts)
    )
    print("{:.1f}".format(total_price))