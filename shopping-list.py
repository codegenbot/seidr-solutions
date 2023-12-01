def shopping_list(prices, discounts):
    total_price = 0
    for i in range(len(prices)):
        discounted_price = prices[i] - (prices[i] * discounts[i] / 100)
        total_price += discounted_price
    return total_price

# Read input from user
n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

# Call the function and print the result
result = shopping_list(prices, discounts)
print(result)