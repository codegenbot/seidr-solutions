```
def shopping_list():
    total_price = 0

    while True:
        try:
            item_prices_str, num_items_str = input().split()
            item_prices = list(map(float, item_prices_str.split()))
            num_items = int(num_items_str)
            if len(item_prices) != num_items: 
                raise Exception("Invalid number of items")
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