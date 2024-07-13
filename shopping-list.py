n = int(input())
prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = sum([(1-discount/100)*price for price, discount in zip(prices, discounts)])
print(total_price)