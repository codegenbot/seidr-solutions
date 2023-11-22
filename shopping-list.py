def calculate_total_price(prices, discounts):
    total_price = 0.0
    for i in range(len(prices)):
        discounted_price = prices[i] - (prices[i] * discounts[i] / 100)
        total_price += discounted_price
    return round(total_price, 2)

n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

result = calculate_total_price(prices, discounts)

print(result)