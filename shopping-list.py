```
n = int(input())
total_price = 0
prices = []
discounts = []
for _ in range(n):
    line = list(map(float, input().split()))
    prices.append(line[0])
    discounts.append(line[1]/100)
for price, discount in zip(prices, discounts):
    total_price += price - (price * discount)
print(f"{total_price:.2f}")