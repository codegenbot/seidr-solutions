def calculate_discounted_price(prices, discounts):
    total_price = sum(prices[i] - (prices[i] * discounts[i] / 100) for i in range(len(prices)))
    return total_price

n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

result = calculate_discounted_price(prices, discounts)
print(result)