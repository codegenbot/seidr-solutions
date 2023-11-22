prices = []
discounts = []

n = int(input())
for i in range(n):
    prices.append(float(input()))
    
m = int(input())
for j in range(m):
    discounts.append(float(input()))

total_price = sum(price - (price * discount/100) for price, discount in zip(prices, discounts))
print(total_price)