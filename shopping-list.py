n = int(input())
prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = sum(price * (1 - discount / 100.0) for price, discount in zip(prices, discounts))
print(total_price)