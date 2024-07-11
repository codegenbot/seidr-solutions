n = int(input())
prices, discounts = [float(x) for x in input().split()], [float(x) for x in input().split()]

total_price = 0
for i in range(n):
    if i < len(prices): 
        discount_amount = prices[i] * (discounts[i] / 100)
        price = max(0, prices[i] - discount_amount)
        total_price += price

print(total_price)