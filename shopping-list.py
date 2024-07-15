Here is the corrected code:

```
def shopping_list():
    n = int(input())
    input_str = input()
    prices = list(map(float, input_str.split()))
    discounts = [float(i) / 100 for i in input().split() for _ in range(n)]
    total_price = sum((1 - d) * p for p, d in zip(prices, discounts))
    return format(total_price, ".1f")


print(shopping_list())