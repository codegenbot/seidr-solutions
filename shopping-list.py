"""
n = int(input())
prices, discounts = [float(x) for x in input().split()], [float(x) for x in input().split()]

total_price = sum(min(p - (p * d / 100), 0) for p, d in zip(prices, discounts))
print(total_price)