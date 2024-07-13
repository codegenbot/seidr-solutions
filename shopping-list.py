```
n = int(input())
prices = list(map(float, input().strip().split()))
input()
discounts = list(map(float, input().strip().split()))
total_price = sum(price * (1 - discount / 100) for price, discount in zip(prices, discounts))
return total_price