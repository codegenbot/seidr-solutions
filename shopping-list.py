```
n = min(int(input()), len(input().split()), len(input().split()))
prices = list(map(float, input().split()[:n]))
discounts = list(map(float, input().split()[:n]))
total_price = 0
for i in range(n):
    price = prices[i] * (1 - discounts[i] / 100)
    total_price += price
return round(total_price, 2)
print(shopping_list())