n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

total_price = round(sum([(1 - discounts[i] / 100) * prices[i] for i in range(n)], 2)
print(total_price)