def shopping_list(prices, discounts):
    total_price = 0
    for i in range(len(prices)):
        try:
            price = float(prices[i])
            discount = float(discounts[i]) / 100
            total_price += (price * (1 - discount))
        except ValueError:
            print("Invalid price or discount! Please enter a valid number.")
            return None
    return round(total_price, 2)