```Python
def shopping_list():
    n = int(input())
    total_price = 0

    for _ in range(n):
        try:
            item_prices = list(map(float, input().split()))
            if len(item_prices) != 2: 
                raise Exception("Invalid number of items")
            item_discount = float(input()) / 100
            subtotal = sum(item_prices) * (1 - item_discount)
            total_price += subtotal
        except ValueError:
            print("Invalid input. Please enter a valid price.")
        except Exception as e:
            print(f"An error occurred: {e}")

    print(format(total_price, ".2f"))

shopping_list()