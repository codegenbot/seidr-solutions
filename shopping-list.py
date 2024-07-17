```
n = int(input())
prices_and_discounts = []

for _ in range(n):
    temp = list(map(float, input().strip().split()))
    prices = [temp[0]]
    discounts = [(100 - temp[1]) / 100.0 for _ in range(len(temp) // 2)]
    prices_and_discounts.extend([prices, discounts])

total_price = sum(price * discount for price, discount in zip(*prices_and_discounts))
print("%.1f" % total_price)