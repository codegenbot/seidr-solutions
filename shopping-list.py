```
prices = [float(x) for x in input().split()]
discounts = [float(x) for x in input().split()][:len(prices)]

n = len(prices)
print("{:.1f}".format(sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))))