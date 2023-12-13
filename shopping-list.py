prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))
assert len(prices) == len(discounts), "Error: The lengths of prices and discounts should be the same."
total_price = sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))
print(total_price)