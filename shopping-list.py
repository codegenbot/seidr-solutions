```
n = int(input())
data = list(map(float, input().split()))
discounts = data[1:]

total_price = sum(price - (price * discount / 100) for price, discount in zip(data[:n], discounts))

return format(total_price, ".2f")