n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

total_price = sum([p - p * d / 100 for p, d in zip(prices, discounts)])
print(total_price)