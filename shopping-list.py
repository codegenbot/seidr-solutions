prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = 0.0
for price, discount in zip(prices, discounts):
    discounted_price = price * (1 - discount / 100)
    total_price += discounted_price

print(round(total_price, 2))