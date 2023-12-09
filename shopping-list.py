prices = list(map(float, input().split()))
discounts = [float(input()) for _ in range(len(prices))]

total_price = sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))
print("{:.2f}".format(total_price))