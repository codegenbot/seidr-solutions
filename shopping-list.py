def calculate_total_price(prices, discounts):
    total_price = 0.0
    for i in range(len(prices)):
        discounted_price = prices[i] - (prices[i] * discounts[i] / 100)
        total_price += discounted_price
    return total_price


# Read input
n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

# Calculate total price
result = calculate_total_price(prices, discounts)

# Print output
print(result)