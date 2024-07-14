def shopping_list():
    while True:
        try:
            prices = list(map(float, input().split()))
            discounts = list(map(float, input().split()))
            quantities = list(map(int, input().split()))
            return round(sum(p * q * (1 - d/100) for p, q, d in zip(prices, quantities, discounts)), 2)
        except ValueError:
            print("Invalid input. Please try again.")
print(shopping_list())