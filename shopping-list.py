def calculate_shopping_total(prices, discounts):
    total_price = sum([price * (1 - discount / 100) for price, discount in zip(prices, discounts)])
    return total_price

n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

result = calculate_shopping_total(prices, discounts)
print(result)