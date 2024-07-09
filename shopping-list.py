n = int(input())
prices = list(map(float, input().split()))
discounts = list(map(int, input().split())) / 100
total_price = sum(price - (price * discount) for price, discount in zip(prices, discounts))
return '¤' + str(format(total_price, "#.2f"))