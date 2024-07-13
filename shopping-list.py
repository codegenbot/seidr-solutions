n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

total = sum([(1 - discounts[i] / 100) * prices[i] for i in range(n)])
print(total)