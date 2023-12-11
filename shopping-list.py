
```python
def shopping_list(prices, discounts):
    total = 0
    for i in range(len(prices)):
        total += (prices[i] * (1 - discounts[i]) / 100)
    return total
```

The code above calculates the discounted price of each item and adds it to the `total` variable. Finally, the function returns the `total`.

The line `total += (prices[i] * (1 - discounts[i]) / 100)` is modified to include division by 100 to convert the percentage discount to a decimal value and apply it correctly to the price.