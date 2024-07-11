n = int(input())  
prices_str = input().split()
prices = list(map(float, prices_str))

discounts_str = input().split()
discounts = list(map(lambda x: float(x) / 100, discounts_str))  

total_price = sum(price * (1 - discount) for price, discount in zip(prices, discounts))
print(round(total_price, 2))