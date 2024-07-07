def shopping_list(prices, discounts):
    # Validate input
    for i in range(min(len(prices), len(discounts))):
        try:
            price = float(prices[i])
            discount = float(discounts[i])
            total_price += price * (1 - discount)
        except ValueError:
            print("Invalid price or discount! Please enter a valid number.")
            return None
    for i in range(len(prices) - len(discounts)):
        price = float(prices[i + len(discounts)])
        discount = 0.0
        total_price += price * (1 - discount)
    # Round result to two decimal places
    total_price = total_price.round(2)
    return total_price