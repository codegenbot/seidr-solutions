n_goods = int(input())
prices = list(map(float, input().split()))
n_discounts = int(input())
discounts = list(map(float, input().split()))

total_price = sum([(1 - discounts[i] / 100) * prices[i] for i in range(n_goods)])
print(total_price)