from decimal import Decimal

n = int(input())
prices = list(map(float, input().split()))
discounts = list(map(float, input().split()))

total_price = sum(price * (Decimal('1') - Decimal(str(discount))/Decimal('100')) for price, discount in zip(prices, discounts))
total_price = round(total_price, 2)  
print(total_price)