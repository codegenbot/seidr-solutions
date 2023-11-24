def shopping_trip(prices, discounts):
    total_price = 0.0
    for price, discount in zip(prices, discounts):
        discounted_price = price * (100 - discount) / 100
        total_price += discounted_price
    return total_price

n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

result = shopping_trip(prices, discounts)
print(result)