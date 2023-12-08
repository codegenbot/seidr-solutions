def calculate_total_price(prices, discounts):
    total_price = sum(prices * (1 - discounts/100))
    return total_price

prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = calculate_total_price(prices, discounts)
print(round(total_price, 2))