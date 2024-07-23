```
def shopping_list():
    n = int(input())
    prices_and_discounts = list(map(float, input().split()))
    discounts = [price - 1 for price in prices_and_discounts[:n]]
    prices = [price for price in prices_and_discounts[n:]]
    total_price = 0
    for i in range(n):
        total_price += (1 - discounts[i] / 100) * prices[i]
    return round(total_price, 2)