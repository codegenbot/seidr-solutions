def shopping_list(prices, discounts):
    total_price = 0.0
    for price, discount in zip(prices, discounts):
        total_price += price * (1 - discount / 100)
    return round(total_price, 2)

num_items = int(input())
prices = list(map(float, input().split()))
num_discounts = int(input())
discounts = list(map(float, input().split()))

result = shopping_list(prices, discounts)
print(result)