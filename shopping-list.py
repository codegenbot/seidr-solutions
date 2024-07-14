```
def shopping_list():
    total = 0
    while True:
        try:
            prices_input = input("Enter prices (space-separated), or 'q' to quit: ")
            if prices_input == 'q':
                return round(total, 2)
                
            prices = []
            while True:
                try:
                    price = float(input("Enter prices (space-separated), or 'q' to quit: "))
                    if price == 0:
                        break
                    prices.append(price)
                    total += price
                except ValueError:
                    print("Invalid input. Please provide prices as floats")
            
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
                
            total = 0
            for i in range(len(prices)):
                total += prices[i] * quantities[i] * (1 - discounts[i] / 100)

            return round(total, 2)
        except ValueError:
            print("Invalid input. Please provide prices as floats")