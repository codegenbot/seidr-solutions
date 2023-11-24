from itertools import zip_longest

prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = sum(price * (1 - discount/100) for price, discount in zip_longest(prices, discounts, fillvalue=0))
print("{:.2f}".format(total_price))