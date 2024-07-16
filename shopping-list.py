n = int(input())
prices_and_discounts = []

for _ in range(n):
    temp = list(map(float, input().strip().split()))
    prices_and_discounts.append(temp)

total_price = sum((price * (100 - d) / 100) for price, d in zip(*[p for p in prices_and_discounts]))

print(format(total_price, ".1f"))