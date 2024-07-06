def shopping_list():
    prices = input("Enter prices (e.g., 10.50 20.25): ").split()
    discounts = input("Enter discounts (e.g., 5% 10%): ").split()
    
    # Validate input
    for i in range(len(prices)):
        try:
            float(prices[i])
        except ValueError:
            print("Invalid price! Please enter a valid number.")
            return
    
    # Handle fewer discounts than prices
    if len(discounts) < len(prices):
        discounts += [0] * (len(prices) - len(discounts))
    
    # Calculate total price
    total_price = 0
    for i in range(len(prices)):
        try:
            total_price += float(prices[i]) * (1 - float(discounts[i]))
        except ValueError:
            print("Invalid discount! Please enter a valid number.")
            return
    
    # Round result to two decimal places
    total_price = round(total_price, 2)
    
    # Print result
    print("Total price:", total_price)