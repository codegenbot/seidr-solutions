def calculate_total_price(prices, discounts):
    total_price = sum(prices)
    for i in range(len(prices)):
        discount_amount = prices[i] * (discounts[i] / 100)
        total_price -= discount_amount
    return total_price

n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

result = calculate_total_price(prices, discounts)
print(result)