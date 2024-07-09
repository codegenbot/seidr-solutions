```
n = int(input())
prices = list(map(float, input().split() + ['0'])*(n//len(input().split())+1))[:n]
discounts = list(map(float, input().split() + ['0'])*(n//len(input().split())+1))[:n]

total_price = 0
for i in range(n):
    total_price += prices[i] * (1 - discounts[i]/100)

print(total_price)