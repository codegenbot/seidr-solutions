n = int(input())
prices, discounts = [float(x) for x in input().split()], [float(x) for x in input().split()]

total_price = 0
for i in range(n):
    if i < len(prices) and i < len(discounts): 
        total_price += max(0, prices[i] - (prices[i] * discounts[i] / 100))

print("{:.2f}".format(total_price))