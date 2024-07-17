```
n = int(input())
prices_and_discounts = []

for _ in range(n):
    temp = list(map(float, input().strip().split()))
    prices_and_discounts.append([temp[0], len(temp) > 1 and temp[1] or 0])

total_price = sum(price * (100 - discount) / 100 for price, discount in prices_and_discounts)
print(format(total_price, ".1f"))