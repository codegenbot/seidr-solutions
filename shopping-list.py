def shopping_list():
    total = 0
    if input("Enter prices (space-separated), or 'q' to quit: ") == 'q':
        return round(total, 2)
    prices_input = input("Enter prices (space-separated): ")
    
    try:
        prices = [float(x) for x in prices_input.split()]
        for i, price in enumerate(prices):
            while True:
                try:
                    quantity = int(input(f"Enter quantity for item {i+1}: "))
                    discount = float(input(f"Enter discount percentage for item {i+1} (or 0 to skip): "))
                    total += price * quantity * (1 - discount / 100)
                    break
                except ValueError:
                    print("Invalid input. Please provide prices and quantities as floats and discount as a percentage")
        
        return round(total, 2)
    except ValueError:
        print("Invalid input. Please provide prices as floats")