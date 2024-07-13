n = int(input())
prices_discounts = []
for _ in range(n):
    line = input().split()
    prices_discounts.append([float(x) for x in line])

total_price = sum(price * (1 - discount / 100.0) for price, discount in prices_discounts)
print(format(total_price, ".2f"))