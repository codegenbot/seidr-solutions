def shopping_list():
    total_price = 0
    while True:
        try:
            num_items_str = input("Enter number of items: ")
            num_items = int(num_items_str)
            item_prices_str = input("Enter prices (space-separated): ")
            item_prices = list(map(float, item_prices_str.split()))
            if len(item_prices) != num_items: 
                raise Exception("Invalid number of items")
            discount = float(input("Enter percentage discount (0-100): ")) / 100
            total_price += sum([p * (1 - discount) for p in item_prices])

            response = input("Do you want to add more items? (y/n): ")
            if response != 'y':
                break
        except ValueError:
            print("Invalid input. Please enter valid prices.")
        except Exception as e:
            print(f"An error occurred: {e}")
    print(format(total_price, ".2f"))