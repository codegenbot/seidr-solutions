n = int(input())
total_price = 0
prices = []
discounts = []
for _ in range(n):
    line = input().split()
    prices.extend(map(float, line[::2]))
    discounts.extend(map(lambda x: float(x)/100, line[1::2]))
for price, discount in zip(prices, discounts):
    total_price += price - (price * discount)
print(f"{total_price:.2f}")