def shopping_list():
    n = int(input("Enter the number of items: "))
    total_price = 0

    for _ in range(n):
        try:
            item_prices = list(map(float, input("Enter prices (two floats separated by space): ").split()))
            if len(item_prices) != 2: 
                raise Exception("Invalid number of items")
            discount_percentage = float(input("Enter the discount percentage: ")) / 100
            subtotal = sum(item_prices) * (1 - discount_percentage)
            total_price += subtotal
        except ValueError:
            print("Invalid input. Please enter valid prices.")
        except Exception as e:
            print(f"An error occurred: {e}")

    print(format(total_price, ".2f"))

shopping_list()