def shopping_list(prices, discounts):
    total_price = 0
    # Validate input
    for i in range(min(len(prices), len(discounts))):
        try:
            price = float(prices[i])
            discount = float(discounts[i])
            total_price += price * (1 - discount)
        except ValueError:
            print("Invalid price or discount! Please enter a valid number.")
            return None
    # Calculate remaining prices without discount
    for i in range(len(discounts), len(prices)):
        try:
            price = float(prices[i])
            total_price += price
        except ValueError:
            print("Invalid price! Please enter a valid number.")
            return None
    # Round result to two decimal places
    total_price = round(total_price, 2)
    return total_price