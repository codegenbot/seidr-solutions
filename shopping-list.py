n = int(input())
prices_and_discounts = []

for _ in range(n):
    temp = list(map(float, input().strip().split()))
    prices_and_discounts.append(temp)

total_price = sum(sum(item) * (100 - discount) / 100 for item, discount in prices_and_discounts)
print(format(total_price, ".1f"))