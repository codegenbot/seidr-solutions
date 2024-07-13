n = int(input())
prices_discounts = []
for _ in range(n):
    line = list(map(float, input().split()))
    prices_discounts.append([line[0], line[1]])
total_price = sum(price * (1 - discount / 100.0) for price, discount in prices_discounts)
print(format(total_price, ".2f"))