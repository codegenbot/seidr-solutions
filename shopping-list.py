def shopping_list():
    total_price = 0
    while True:
        try:
            price = float(input("Enter item price (or 'q' to quit): "))
            if price == -1:  
                break
            discount = float(input(f"Enter {price} price discount (or 'q' to quit): "))
            total_price += price - (price * (discount / 100))
        except ValueError:
            print("Invalid input. Please try again.")
    return round(total_price, 2)

print(shopping_list())