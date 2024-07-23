n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

total_price = sum([(prices[i] - (prices[i] * discounts[i] / 100)) for i in range(n)])
print(total_price)