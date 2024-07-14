def shopping_list():
    total_price = 0
    item_prices_str = input()
    item_prices = list(map(float, item_prices_str.split()))
    num_items = len(item_prices)

    while True:
        try:
            if not all(0 <= p <= 100 for p in item_prices): 
                raise Exception("Invalid prices")
            discount = float(input()) / 100
            subtotal = sum([p * (1 - discount) for p in item_prices])
            total_price += subtotal

            if input("Do you want to add more items? (y/n): ") != 'y':
                break
        except ValueError:
            print("Invalid input. Please enter a valid price.")
        except Exception as e:
            print(f"An error occurred: {e}")
    print(format(total_price, ".2f"))