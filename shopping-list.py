def shopping_list():
    total_price = 0
    n = int(input())

    for _ in range(n):
        try:
            item_prices = list(map(float, input().split()))
            if len(item_prices) != n: 
                raise Exception("Invalid number of items")
            discount = float(input()) / 100
            subtotal = sum([p * (1 - discount) for p in item_prices])
            total_price += subtotal
        except ValueError:
            print("Invalid input. Please enter a valid price.")
        except Exception as e:
            print(f"An error occurred: {e}")
    print(format(total_price, ".2f"))