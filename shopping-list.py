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
                total_price = sum(prices)

                discounts = []
                for i in range(len(prices)):
                    if i == len(prices) - 1:
                        discount = float(
                            input(f"Enter discount percentage (or 0 to skip): ")
                        )
                    else:
                        discount = float(
                            input(
                                f"Enter discount percentage for item {i+1} (or 0 to skip): "
                            )
                        )

                    quantity = int(input(f"Enter quantity for item {i+1}: "))
                    discounts.append((quantity, discount))

                total_discount = 0
                for i in range(len(prices)):
                    quantity, discount = discounts[i]
                    if discount > 0:
                        total_discount += (discount / 100) * prices[i] * quantity

                total += total_price - total_discount
        except ValueError:
            print("Invalid input. Please provide prices as floats")
    return round(total, 2)