```
def shopping_list():
    total = 0
    while True:
        try:
            prices_input = input("Enter prices (space-separated), or 'q' to quit: ")
            if prices_input == 'q':
                return round(total, 2)
            prices = list(map(float, prices_input.split()))
            for i in range(len(prices)):
                quantities_discounts = input(f"Enter quantity and discount percentage for item {i+1} (space-separated): ").split()
                quantities = int(quantities_discounts[0])
                if len(quantities_discounts) > 1:
                    discounts = float(quantities_discounts[1])
                else:
                    discounts = 0
                total += prices[i] * quantities * (1 - discounts / 100)
        except ValueError:
            print("Invalid input. Please provide prices and quantities as floats")