from decimal import Decimal

n = int(input())
prices = list(map(Decimal, input().split()))
discounts = list(map(Decimal, input().split()))

total_price = sum(price * (Decimal('1') - discount/Decimal('100')) for price, discount in zip(prices, discounts))
total_price = round(total_price, 2)
print(total_price)