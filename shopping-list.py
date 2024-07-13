n = int(input("Enter the number of goods: "))
if n < 1:
    print("Error: Number of goods should be greater than zero.")
else:
    total_price = 0
    for _ in range(n):
        try:
            prices_discounts = list(map(str.strip, input().split()))
            if len(prices_discounts) != 2*n:
                raise ValueError("Invalid input. Each line should contain 'price discount' pairs.")
            total_price += sum([float(price) * (1 - float(discount) / 100.0) for price, _ in zip(prices_discounts[::2], prices_discounts[1::2])])
        except ValueError as e:
            print(f"Error: {e}")
    print(format(total_price, ".2f"))