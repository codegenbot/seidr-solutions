from decimal import Decimal

n = int(input())
prices = list(map(Decimal, input().split()))
m = int(input())
discounts = list(map(Decimal, input().split()))

total_price = sum([(1 - discounts[i] / 100) * prices[i] for i in range(n)])
print(total_price)