```
item_prices = []
num_items = []

print("Enter the prices of each item, followed by the number of items, separated by spaces: ")
input_str = input()
item_prices_str, num_items_str = input_str.split()
num_items = int(num_items_str)
item_prices = list(map(float, item_prices_str.split()))

total_price = 0
while True:
    try:
        discount = float(input("Enter the percent discount (as a decimal): ")) / 100
        total_price += sum([p * (1 - discount) for p in item_prices])

        response = input("Do you want to add more items? (y/n): ")
        if response.lower() != 'y':
            break
    except ValueError:
        print("Invalid input. Please enter a valid price.")
    except Exception as e:
        print(f"An error occurred: {e}")
print(format(total_price, ".2f"))