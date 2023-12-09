prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))[:len(prices)]

total_price = sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))
total_price = '{:.2f}'.format(total_price)
print(total_price)