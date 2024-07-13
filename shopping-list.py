```
n = int(input())
prices_discounts = []
for _ in range(n):
    line = list(map(float, input().split()))
    prices = [line[i] for i in range(0, len(line), 2)]
    discounts = [line[i] for i in range(1, len(line), 2)]
    if len(prices) != len(discounts):
        print("Invalid input. Please enter exactly 2 numbers per line.")
        exit()
    prices_discounts.extend(zip(prices, discounts))

total_price = sum(price * (1 - discount / 100.0) for price, discount in prices_discounts)
print(format(total_price, ".2f"))