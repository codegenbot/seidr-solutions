n = int(input())
prices_discounts = []
for _ in range(n):
    line = list(map(float, input().split()))
    if len(line) >= 2:
        prices_discounts.append([line[0], line[1]])
    else:
        prices_discounts.append([line[0]])
total_price = sum(min(price * (1 - d / 100.0), price) for price, d in prices_discounts)
print(format(total_price, ".2f"))