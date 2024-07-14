def shopping_list():
    total = 0
    while True:
        try:
            prices_input = input("Enter prices (space-separated), or 'q' to quit: ")
            if prices_input == 'q':
                return round(total, 2)
                
            if prices_input != 'q':
                prices = list(map(float, prices_input.split()))
                for i in range(len(prices)):
                    while True:
                        try:
                            quantity = int(input(f"Enter quantity for item {i+1}: "))
                            break
                        except ValueError:
                            print("Invalid input. Please provide a number for the quantity.")
                    while True:
                        try:
                            discount = float(input(f"Enter discount percentage for item {i+1} (or 0 to skip): "))
                            total += prices[i] * quantity * (1 - discount / 100)
                            break
                        except ValueError:
                            print("Invalid input. Please provide a number and a decimal point if necessary.")
                return round(total, 2)
        except ValueError:
            print("Invalid input. Please provide prices as floats")