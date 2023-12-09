prices = list(map(float, input().split()))
n = len(prices)
discounts = list(map(float, input().split()))

total_price = sum(price * (1 - (discounts / 100)) for price, discounts in zip(prices, discounts))
total_price = round(total_price, 2)
print(total_price)