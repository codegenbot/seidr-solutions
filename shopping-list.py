```
n = int(input("Enter the number of goods: "))
if n < 1:
    print("Error: Number of goods should be greater than zero.")
else:
    total_price = 0
    for _ in range(n):
        prices_discounts = [list(map(float, pair.split())) for pair in input().split()]
        if len(prices_discounts) != 2*n:
            print("Error: Invalid input. Each line should contain 'price discount' pairs.")
            exit()
        total_price += sum([p - (p * d / 100) for p, d in zip(*[pair for pair in prices_discounts])])
    print(f"{total_price:.2f}")