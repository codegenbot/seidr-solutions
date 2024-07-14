def shopping_list():
    total = 0
    while True:
        prices_input = input("Enter prices (space-separated), or 'q' to quit: ")
        
        if prices_input == 'q':
            return round(total, 2)
            
        prices = list(map(float, prices_input.split()))
        quantities = []
        discounts = []

        for i in range(len(prices)):
            while True:
                try:
                    quantity = int(input(f"Enter quantity for item {i+1}: "))
                    if prices_input != 'q':
                        discount = float(input(f"Enter discount percentage for item {i+1} (or 0 to skip): "))
                    else:
                        discount = 0
                    quantities.append(quantity)
                    discounts.append(discount)
                    break
                except ValueError:
                    print("Invalid input. Please provide prices and quantities as floats and discount as a percentage")
                    
        total = sum(price * quantity * (1 - discount / 100) for price, quantity, discount in zip(prices, quantities, discounts))
        
    return round(total, 2)