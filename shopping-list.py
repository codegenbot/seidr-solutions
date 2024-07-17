n = int(input())
prices_and_discounts = []

for _ in range(n):
    temp = list(map(float, input().strip().split()))
    if len(temp) >= 2:  
        prices_and_discounts.append([temp[0], temp[1]])

total_price = sum(price * (100 - discount) / 100 for price, discount in prices_and_discounts)
print(format(total_price, ".1f"))