n = int(input())
prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

if len(prices) == len(discounts):
    total_price = sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))
    print(total_price)
else:
    print("Error: The lengths of prices and discounts should be the same.")