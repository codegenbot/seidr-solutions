n = int(input("Enter the number of goods: "))
total_price = 0
for _ in range(n):
    prices_discounts = [float(x) for x in input().split()]
    if len(prices_discounts) != 2*n:
        print("Error: Invalid input. Each line should contain 'price discount' pairs.")
        exit()
    total_price += sum([p - (p * d / 100) for p, d in zip(prices_discounts[::2], prices_discounts[1::2])])
print(f"{total_price:.2f}")