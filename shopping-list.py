def shopping_list(prices, discounts):
    total_price = []
    for i in range(len(prices)):
        try:
            price = float(prices[i])
            discount = float(discounts[i])
            total_price.append(price * (1 - discount))
        except ValueError:
            print("Invalid price or discount! Please enter a valid number.")
            return None
    return total_price