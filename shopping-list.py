def shopping_list():
    total_price = 0

    while True:
        try:
            item_prices = list(map(float, input().split()))
            num_items = int(input())
            if len(item_prices) != num_items: 
                raise Exception("Invalid number of items")
            discount = float(input()) / 100
            subtotal = sum([p * (1 - discount) for p in item_prices])
            total_price += subtotal
        except ValueError:
            print("Invalid input. Please enter a valid price.")
        except Exception as e:
            print(f"An error occurred: {e}")
    print(format(total_price, ".2f"))