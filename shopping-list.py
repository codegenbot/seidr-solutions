prices_str = input().split()
discounts_str = input().split()

prices = list(map(float, prices_str))
discounts = list(map(int, discounts_str)) 

total_price = sum(price * (1 - d/100) for price, d in zip(prices, discounts))
print(round(total_price, 2))