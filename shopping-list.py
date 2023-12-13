n = len(prices := input().split())
prices = list(map(float, prices))
discounts = list(map(float, input().split()))

assert n == len(discounts), "Error: The lengths of prices and discounts should be the same."

total_price = sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))
print(total_price)