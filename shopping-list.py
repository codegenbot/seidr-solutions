n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

total_price = sum([round((1 - discounts[i] / 100) * prices[i], 2) for i in range(n)])
print(total_price)