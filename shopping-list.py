n = int(input())
prices = [float(x) for x in input().split()]
m = int(input())
discounts = [float(x) for x in input().split()]

total_price = sum([(price - (price * discount / 100)) for price, discount in zip(prices, discounts)])
print(total_price)