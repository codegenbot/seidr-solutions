```
n = int(input())
prices, discounts = zip(*[list(map(float, input().split())) for _ in range(n)])
prices_discounts = list(zip(prices, map(int, discounts)))
total_price = sum((price * (1 - d / 100.0)) if 1 <= i and i <= 99 else price for price, (d, i) in zip(prices, discounts))
print(format(total_price, ".2f"))