def calculate_total_price(prices, discounts):
    total_price = 0.0
    for price, discount in zip(prices, discounts):
        discounted_price = price - (price * (discount / 100))
        total_price += discounted_price
    return total_price

num_prices = int(input())
prices = list(map(float, input().split()))
num_discounts = int(input())
discounts = list(map(float, input().split()))

result = calculate_total_price(prices, discounts)
print(result)