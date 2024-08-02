prices = [float(input()) for _ in range(int(input()))]
discounts = [float(input()) for _ in range(int(input()))]
total_price = sum([(1 - (discount / 100)) * price for price, discount in zip(prices, discounts)])
print(total_price)