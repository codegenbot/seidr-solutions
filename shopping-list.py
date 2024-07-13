n = int(input())
prices, discounts = zip(*[list(map(float, input().split())) for _ in range(n)])
total_price = sum((price * (1 - d / 100.0)) for price, d in zip(prices, discounts))
print(format(total_price, ".2f"))