Here is the completed code:

```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = sum(p * (1 - d/100) for p, d in zip(prices, discounts))
    return total_price

print(shopping_list())