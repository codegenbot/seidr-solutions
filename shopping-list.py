```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    if len(prices) != len(discounts):
        return "Number of items and discounts must be equal"

    total_price = 0
    for i in range(n):
        total_price += prices[i] - (prices[i] * discounts[i] / 100)

    return round(total_price, 1)


print(shopping_list())