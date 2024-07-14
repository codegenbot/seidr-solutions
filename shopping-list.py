def shopping_list():
    while True:
        try:
            prices = list(map(float, input("Enter prices (space-separated): ").split()))
            if len(prices) < 1: 
                print("Please provide at least one price")
                continue
            
            discounts = list(map(int, input("Enter discounts (space-separated): ").split()))
            quantities = list(map(int, input("Enter quantities (space-separated): ").split()))
            
            return round(
                sum(p * q * (1 - d / 100) for p, q, d in zip(prices, quantities, discounts)),
                2,
            )
        except ValueError:
            print("Invalid input. Please provide prices and quantities as floats and discount as a percentage")

print(shopping_list())