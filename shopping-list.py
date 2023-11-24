prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = sum((round(price - price * discount/100, 2) for price, discount in zip(prices, discounts)))
print(total_price)