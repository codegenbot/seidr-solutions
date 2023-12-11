The issue with your current implementation is that you are not rounding the result to two decimal places, which is causing the discrepancy between the expected and actual output. To fix this, you can use the built-in `round()` function in Python to round the result to two decimal places before returning it.
```
def shopping_list(prices, discounts):
    total = 0
    for i in range(len(prices)):
        total += (prices[i] * (1 - discounts[i]))
    return round(total, 2)
```