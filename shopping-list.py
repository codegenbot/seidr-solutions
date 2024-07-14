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
                total += sum(prices)
                discount_total = sum(
                    [
                        price
                        * int(input(f"Enter quantity for item {i+1}: "))
                        * (
                            1
                            - float(
                                input(
                                    f"Enter discount percentage for item {i+1} (or 0 to skip): "
                                )
                            )
                            / 100
                        )
                        for i in range(len(prices))
                    ]
                )
                return round(total - discount_total, 2)
        except ValueError:
            print("Invalid input. Please provide prices as floats")