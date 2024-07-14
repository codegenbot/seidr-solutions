```
def shopping_list():
    total_price = 0
    while True:
        try:
            num_items = int(input())
            subtotal = 0
            for _ in range(num_items):
                item_prices = list(map(float, input().split()))
                discount = float(input()) / 100
                subtotal += sum([p * (1 - discount) for p in item_prices])
            total_price += subtotal

            if input("Do you want to add more items? (y/n): ") != 'y':
                break
        except ValueError:
            print("Invalid input. Please enter a valid price.")
        except Exception as e:
            print(f"An error occurred: {e}")
    print(format(total_price, ".2f"))