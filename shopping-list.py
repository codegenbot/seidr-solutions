```
n = int(input())
data = list(map(float, input().split()))
prices = data[:n]
discounts = data[n:]

total_price = sum(price - (price * discount / 100) for price, discount in zip(prices, discounts))

return format(total_price, ".2f")