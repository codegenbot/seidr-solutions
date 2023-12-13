```python
n = int(input())
prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

if len(prices) != len(discounts):
    print("Number of prices and discounts must be the same")
else:
    total_price = sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))
    print(total_price)
```