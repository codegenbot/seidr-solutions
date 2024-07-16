n = int(input())
prices = list(map(float, input().split()))
discounts = []
for i in range(n):
    discounts.append(list(map(float, input().split())))
total_price = sum((price * (100 - discount) / 100) for price, discount in zip(prices, *discounts))
print(format(total_price, ".1f"))