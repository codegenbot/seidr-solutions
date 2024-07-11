n = int(input())
prices, discounts = [float(x) for x in input().split()], [float(x) for x in input().split()]

total_price = 0
for i in range(n):
    if i < len(prices) and i < len(discounts): 
        price = prices[i] - (prices[i] * discounts[i] / 100)
        total_price += max(0, price)

print(total_price)