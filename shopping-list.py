prices = []
discounts = []

n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

total_price = sum(p * (1 - d / 100) for p, d in zip(prices, discounts))
print("{:.2f}".format(total_price))