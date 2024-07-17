```
n = int(input())
prices_and_discounts = []

for _ in range(n):
    temp = list(map(float, input().strip().split()))
    prices_and_discounts.append(temp)

total_price = sum(price * (100 - discount) / 100 for price, discount in zip(*prices_and_discounts))
print("%.1f" % total_price)