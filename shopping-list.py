n = int(input())
items = int(input())

prices = [float(x) for x in input().split()]
discounts = [int(x) for x in input().split()]

total_price = 0
for i in range(items):
    total_price += (1 - discounts[i] / 100) * prices[i]

print(format(total_price, ".1f"))