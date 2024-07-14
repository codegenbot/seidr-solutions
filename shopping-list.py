def shopping_list():
    n = int(input())
    total_price = 0

    for _ in range(n):
        try:
            item_prices = list(map(float, input().split()))
            if len(item_prices) != 2: 
                raise Exception("Invalid number of items")
            discount = float(input()) / 100
            subtotal = sum(item_prices) * (1 - discount)
            total_price += subtotal
        except ValueError as e:
            print(f"Invalid input. Please enter valid prices for all items: {e}")
    print(format(total_price, ".2f"))