def calculate_total_price(prices, discounts):
    total_price = 0.0
    for price, discount in zip(prices, discounts):
        price_after_discount = price - (price * (discount / 100.0))
        total_price += price_after_discount
    return total_price


num_items = int(input())  # Read the number of items
prices = list(map(float, input().split()))  # Read the prices of items
num_discounts = int(input())  # Read the number of discounts
discounts = list(map(float, input().split()))  # Read the discounts

result = calculate_total_price(prices, discounts)
print(result)