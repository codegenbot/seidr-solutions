from itertools import zip_longest

prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = round(sum(price * (1 - discount/100) for price, discount in zip_longest(prices, discounts, fillvalue=0)), 2)
print(total_price)