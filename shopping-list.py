prices = []
discounts = []

n = int(input())
prices = list(map(float, input().split()))

m = int(input())
discounts = list(map(float, input().split()))

total_price = sum(prices[i] * (1 - discounts[i] / 100) for i in range(n))
print(round(total_price, 2))