def calculate_discounted_price(prices, discounts):
    total_price = 0.0
    for price, discount in zip(prices, discounts):
        discounted_price = price - (price * discount / 100)
        total_price += discounted_price
    return total_price

num_items = int(input())
prices = list(map(float, input().split()))
num_discounts = int(input())
discounts = list(map(float, input().split()))

result = calculate_discounted_price(prices, discounts)
print(result)