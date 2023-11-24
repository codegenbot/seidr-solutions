prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = 0
for price, discount in zip(prices, discounts):
    total_price += price * (1 - discount / 100)

print(round(total_price, 2))