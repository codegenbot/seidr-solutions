```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    if len(prices) != n:
        return "Error: Prices length does not match n"
    discounts = list(map(float, input().split()))
    if len(discounts) != n:
        return "Error: Discounts length does not match n"
    total_price = 0
    for i in range(n):
        price = prices[i] * (1 - discounts[i] / 100)
        total_price += price
    return round(total_price, 2)


print(shopping_list())