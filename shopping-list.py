def shopping_list():
    total = 0
    quit_processing = False
    while True:
        try:
            if not quit_processing:
                prices_input = input("Enter prices (space-separated), or 'q' to quit: ")
                if prices_input == "q":
                    quit_processing = True

            if quit_processing:
                return round(total, 2)

            if prices_input != "q":
                prices = list(map(float, prices_input.split()))
                for price in prices:
                    quantity = int(input(f"Enter quantity for item {prices.index(price)+1}: "))
                    while True:
                        try:
                            discount = float(input(f"Enter discount percentage for item {prices.index(price)+1} (or 0 to skip): "))
                            total += price * quantity * (1 - discount / 100)
                            break
                        except ValueError:
                            print("Invalid input. Please provide a number and a decimal point if necessary.")
                return round(total, 2)
        except ValueError:
            print("Invalid input. Please provide prices as floats")