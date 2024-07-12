n = int(input())
prices_info = input().split()
prices = list(map(float, prices_info[:len(prices_info)//2]))
discounts = list(map(float, prices_info[len(prices_info)//2:]))
total_price = 0
for i in range(n):
    total_price += (1 - discounts[i] / 100) * prices[i]
return round(total_price, 6)