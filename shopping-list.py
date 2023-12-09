prices = list(map(float, input().split()))
n = len(prices)
discounts = list(map(float, input().split()))

total_price = sum(price - (price * discount / 100) for price, discount in zip(prices, discounts)) - sum(prices)
total_price = round(total_price, 2)
print(total_price)