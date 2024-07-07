def shopping_list(prices, discounts):
    # Validate input
    if len(discounts) < len(prices):
        discounts += [0] * (len(prices) - len(discounts))

    total_price = 0
    for i in range(len(prices)):
        try:
            price = float(prices[i], 2)
            discount = float(discounts[i], 2)
            total_price += price * (1 - discount)
        except ValueError:
            print("Invalid price or discount! Please enter a valid number.")
            return None

    # Round result to two decimal places
    total_price = round(total_price, 2)
    return total_price