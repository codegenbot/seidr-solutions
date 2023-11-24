prices_count = int(input())
prices = list(map(float, input().split()))
discounts_count = int(input())
discounts = list(map(float, input().split()))

total_price = sum(prices[i] - (prices[i] * discounts[i] / 100) for i in range(prices_count))
print(total_price)