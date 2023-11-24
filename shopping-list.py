prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = sum([price - price * (discount/100) for price, discount in zip(prices, discounts)])
print("{:.2f}".format(round(total_price, 2)))