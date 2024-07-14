```
def shopping_list():
    n = int(input("Enter number of items: "))
    total_price = 0

    for _ in range(n):
        try:
            item_prices = list(map(float, input("Enter prices (space separated): ").split()))
            if len(item_prices) != 2: 
                raise Exception("Invalid number of items")
            item_discount = float(input("Enter discount percentage: ")) / 100
            subtotal = sum(item_prices) * (1 - item_discount)
            total_price += subtotal
        except ValueError:
            print("Invalid input. Please enter a valid price.")
        except Exception as e:
            print(f"An error occurred: {e}")

    print(format(total_price, ".2f"))

shopping_list()