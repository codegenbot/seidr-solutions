```python
n = int(input())
prices = [float(x) for x in input().split()]
discounts = [float(x)/100 for x in input().split()]

def calculate_total_price(n, prices, discounts):
    return sum(price * (1 - discount) for price, discount in zip(prices, discounts))

print("{:.1f}".format(calculate_total_price(n, prices, discounts)))