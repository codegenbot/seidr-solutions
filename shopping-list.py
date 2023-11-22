def shopping_list(prices, discounts):
    total_price = sum(prices)
    for price, discount in zip(prices, discounts):
        total_price -= price * discount / 100
    return total_price


num_prices = int(input())
prices = list(map(float, input().split()))
num_discounts = int(input())
discounts = list(map(float, input().split()))

result = shopping_list(prices, discounts)
print(result)