```
n = int(input())
prices = list(map(float, input().strip().split()))
discounts = [list(map(float, input().strip().split())) for _ in range(n)]

total_price = sum((price * (100 - d) / 100) for price, d in zip(prices, *discounts))
print(format(total_price, ".1f"))