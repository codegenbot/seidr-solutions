def calculate_total_price(prices, discounts):
    total_price = sum([price - price * (discount / 100) for price, discount in zip(prices, discounts)])
    return total_price

num_items = int(input())
prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))
    
total_price = calculate_total_price(prices, discounts)
print(total_price)