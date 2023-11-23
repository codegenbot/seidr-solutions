prices = []
discounts = []

n = int(input())
prices = list(map(float, input().split()))

m = int(input())
discounts = list(map(float, input().split()))

total_price = sum([price - (price * discount / 100) for price, discount in zip(prices, discounts)])
total_price = round(total_price, 2)
print(total_price)