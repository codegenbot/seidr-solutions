```
def shopping_list():
    total = 0
    while True:
        try:
            if input("Enter prices (space-separated), or 'q' to quit: ") == "q":
                break

            prices_input = input()
            if prices_input != "q":
                prices = list(map(float, prices_input.split()))
                for price in prices:
                    quantity = int(input(f"Enter quantity for item {prices.index(price)+1}: "))
                    while True:
                        try:
                            discount = float(input(f"Enter discount percentage for item {prices.index(price)+1} (or 0 to skip): "))
                            total += price * quantity
                            total -= price * quantity * (discount / 100)
                            break
                        except ValueError:
                            print("Invalid input. Please provide a number and a decimal point if necessary.")
                return round(total, 2)
        except ValueError:
            print("Invalid input. Please provide prices as floats")