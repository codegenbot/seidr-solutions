prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = sum([(1 - discounts[i] / 100) * prices[i] for i in range(len(prices))])
print(total_price)