n = int(input())
prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = sum(price * (1 - discounts[i] / 100) for i, price in enumerate(prices))
print(total_price)