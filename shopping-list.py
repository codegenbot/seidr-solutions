```
n = int(input())
prices_str = input().split()
discounts_str = input().split()

prices = list(map(float, prices_str))
discounts = list(map(float, discounts_str))

total_price = sum(n * price * (1 - discount / 100) for price, discount in zip(prices, discounts))
print(round(total_price, 2))