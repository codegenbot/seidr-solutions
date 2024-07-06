def shopping_list():
    prices = input("Enter prices (e.g., 10.50 20.25): ").split()
    discounts = input("Enter discounts (e.g., 5% 10%): ").split()

    # Calculate total price
    total_price = 0
    for price, discount in zip(prices, discounts):
        try:
            total_price += float(price) * (1 - float(discount))
        except ValueError:
            print("Invalid discount! Please enter a valid number.")
            return

    # Round result to two decimal places
    total_price = round(total_price, 2)

    # Print result
    print("Total price:", total_price)