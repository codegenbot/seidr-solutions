```python
def apply_discount(prices, discounts):
    total_price = sum(prices)
    for price, discount in zip(prices, discounts):
        total_price -= (price * discount) / 100
    return total_price


# read input
n = int(input())
prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

# call the function and print the result
result = apply_discount(prices, discounts)
print(result)
```