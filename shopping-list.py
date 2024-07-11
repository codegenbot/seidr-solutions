```
n = int(input())
prices_str = input().split()
discounts_str = input().split()
discounts = [float(i) for i in map(str, discounts_str)]

total_price = sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))
print(round(total_price, 2))