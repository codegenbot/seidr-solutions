def calculate_total_price(prices, discounts):
    total_price = sum([price * (1 - discount/100) for price, discount in zip(prices, discounts)])
    return total_price

num_items = int(input())
prices = list(map(float, input().split()))
num_discounts = int(input())
discounts = list(map(float, input().split()))

result = calculate_total_price(prices, discounts)
print(result)