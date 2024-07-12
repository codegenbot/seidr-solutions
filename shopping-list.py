prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = sum([(prices[i] * (1 - discounts[i] / 100)) for i in range(len(prices))])

print(total_price)