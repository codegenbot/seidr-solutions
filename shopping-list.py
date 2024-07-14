```
def shopping_list():
    total = 0
    prices_input = input("Enter prices (space-separated), or 'q' to quit: ")
    
    if prices_input == 'q':
        return 0

    prices = list(map(float, prices_input.split()))
    for i in range(len(prices)):
        quantity = int(input(f"Enter quantity for item {i+1}: "))
        discount = float(input(f"Enter discount percentage for item {i+1} (or 0 to skip): "))
        total += prices[i] * quantity * (1 - discount / 100)
    return round(total, 2)

print(shopping_list())