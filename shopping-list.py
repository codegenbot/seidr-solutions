def shopping_list():
    total_price = 0
    while True:
        try:
            item_prices_str, num_items_str = input().split()
            num_items = int(num_items_str)
            item_prices = list(map(float, item_prices_str.split()))
            if len(item_prices) != num_items: 
                raise Exception("Invalid number of items")
            discount = float(input()) / 100
            total_price += sum([p * (1 - discount) for p in item_prices])

            response = input("Do you want to add more items? (y/n): ")
            if response.lower() != 'y':
                break
        except ValueError:
            print("Invalid input. Please enter a valid price.")
        except Exception as e:
            print(f"An error occurred: {e}")
    print(format(total_price, ".2f"))