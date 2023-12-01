def calculate_total_price(prices, discounts):
    total_price = sum(prices)
    for i in range(len(prices)):
        discount = (100 - discounts[i]) / 100
        total_price -= prices[i] * discount
    return total_price

num_prices = int(input())
prices = list(map(float, input().split()))
num_discounts = int(input())
discounts = list(map(float, input().split()))

result = calculate_total_price(prices, discounts)
print(result)