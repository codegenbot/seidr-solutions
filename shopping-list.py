```
n = int(input())
prices_discounts = []
for _ in range(n):
    line = list(map(float, input().split()))
    if len(line) % 2 != 0:
        print("Invalid input. Please enter exactly 2 numbers per line.")
        exit()
    for i in range(0, len(line), 2):
        prices_discounts.append((line[i], line[i+1]))

total_price = sum(price * (1 - discount / 100.0) for price, discount in prices_discounts)
print(format(total_price, ".2f"))