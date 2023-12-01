def calculate_total_price(prices, discounts):
    total_price = 0.0
    for price, discount in zip(prices, discounts):
        total_price += price * (1 - discount / 100)
    return total_price


# Read the number of items
n = int(input())

# Read the prices of the items
prices = list(map(float, input().split()))

# Read the discounts of the items
discounts = list(map(float, input().split()))

# Calculate the total price
total_price = calculate_total_price(prices, discounts)

# Print the total price
print(total_price)