```
def shopping_list():
    total = 0
    while True:
        try:
            prices_input = input("Enter prices (space-separated), or 'q' to quit: ")
            if prices_input == 'q':
                return round(total, 2)
                
            if prices_input != 'q':
                prices = list(map(float, prices_input.split()))
                total += sum(p for p in prices)  
                break
        except ValueError:
            print("Invalid input. Please provide prices as floats")
    
    while True:
        try:
            quantity_prices_discounts = []
            for i in range(len(prices)):
                item_prices_discounts = []
                while True:
                    try:
                        quantity = int(input(f"Enter quantity for item {i+1}: "))
                        discount = float(input(f"Enter discount percentage for item {i+1} (or 0 to skip): "))
                        item_prices_discounts.append((quantity, prices[i], discount))
                        break
                    except ValueError:
                        print("Invalid input. Please provide quantities as integers and discount as a percentage")
                quantity_prices_discounts.append(item_prices_discounts)
            for items in quantity_prices_discounts:
                for quantity, price, discount in items:
                    total += quantity * price * (1 - discount / 100)
            return round(total, 2)
        except ValueError:
            print("Invalid input. Please provide quantities as integers and discount as a percentage")