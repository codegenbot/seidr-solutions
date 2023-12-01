def shopping_list(prices, discounts):
    total_price = sum([price * (100 - discount) / 100 for price, discount in zip(prices, discounts)])
    return total_price

num_prices = int(input())
prices = list(map(float, input().split()))
num_discounts = int(input())
discounts = list(map(float, input().split()))

result = shopping_list(prices, discounts)
print(result)