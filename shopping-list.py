```python
prices, discounts = zip(*[(float(p), float(d)) for p, d in zip(input().split(), input().split())])
total_price = round(sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts)), 2)
print(total_price)
```