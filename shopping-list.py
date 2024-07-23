n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

total_price = sum([(1 - discounts[i] / 100) * prices[i] for i in range(n)])
total_price = round(total_price, 2)  # Round to 2 decimal places
print(total_price)