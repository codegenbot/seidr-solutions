n = int(input())
prices = []
discounts = []

for _ in range(n):
    temp = input().split()
    prices.extend(map(float, temp[:-1]))
    discounts.extend(map(float, temp[-1:]))

total_price = sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))
print(round(total_price, 2))