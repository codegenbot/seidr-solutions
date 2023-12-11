
```
def shopping_list(prices, discounts):
    return sum([p * (1 - d) for p, d in zip(prices, discounts)])
```