```
n = len([float(x) for x in input().split()])
prices = [float(x) for x in input().split()]
discounts = [float(x) for x in input().split()]

total_price = 0
for i in range(n):
    price = prices[i]
    discount = 1 - discounts[i] / 100
    total_price += price * discount

return round(total_price, 2)
print(shopping_list())