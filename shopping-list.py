def shopping_list():
    total = 0
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
                discount = float(input(f"Enter discount percentage for item {i+1} (or 0 to skip): "))
                quantities.append(quantity)
                discounts.append(discount)
                break
            except ValueError:
                print("Invalid input. Please provide prices and quantities as floats and discount as a percentage")
                
    for i in range(len(prices)):
        total += prices[i] * quantities[i] * (1 - discounts[i] / 100)

    return round(total, 2)