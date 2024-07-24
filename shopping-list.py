from decimal import Decimal

n = int(input())
prices = list(map(Decimal, input().split()))
m = int(input())
discounts = list(map(Decimal, input().split()))

total_price = sum([(prices[i] * (1 - discounts[i] / 100)) for i in range(n)])
print(round(total_price, 2))