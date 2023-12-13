n = int(input())
values = input().split()
prices = list(map(float, values[:n]))
discounts = list(map(float, values[n:]))

total_price = sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))
print(total_price)