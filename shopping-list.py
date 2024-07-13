```
n = int(input())
prices_discounts = []
for _ in range(n):
    line = list(map(float, input().split()))
    if len(line) >= 2 and len(line) <= 3:
        prices_discounts.append([line[0], max(0, min(line[1], 100))])
    else:
        print("Invalid input. Please enter exactly 2 or 3 numbers per line.")
        exit()
total_price = sum(price * (1 - discount / 100.0) for price, discount in prices_discounts)
print(format(total_price, ".2f"))