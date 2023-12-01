# Read the number of items
n = int(input())

# Read the prices of the items
prices = list(map(float, input().split()))

# Read the discounts of the items
discounts = list(map(float, input().split()))

# Calculate the total price after applying the discounts
total_price = sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))

# Print the total price
print(total_price)