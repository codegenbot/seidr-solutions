n = int(input())
prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = 0
for i in range(n):
    total_price += prices[i] * (1 - discounts[i] / 100)

print(round(total_price, 2))