def shopping_list():
    total = 0
    while True:
        try:
            prices = list(map(float, input("Enter prices (space-separated), or 'q' to quit: ").split()))
            if len(prices) < 1 and prices[0] != 'q':
                print("Please provide at least one price")
                continue
            for i in range(len(prices)):
                quantities = int(input(f"Enter quantity for item {i+1}: "))
                discounts = float(input(f"Enter discount percentage for item {i+1} (or 0 to skip): "))
                if prices[i] == 'q':
                    return round(total, 2)
                total += prices[i] * quantities * (1 - discounts / 100)
        except ValueError:
            print("Invalid input. Please provide prices and quantities as floats and discount as a percentage")