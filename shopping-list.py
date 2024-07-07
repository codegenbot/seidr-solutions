def shopping_list(prices, discounts):
    if len(discounts) < len(prices):
        discounts += [0] * (len(prices) - len(discounts))

    total_price = 0
    for i in range(len(prices)):
        try:
            price = float(prices[i])
            discount = float(discounts[i])
            total_price += price * (1 - discount)
        except ValueError:
            print("Invalid price or discount! Please enter a valid number.")
            return None

    total_price = round(total_price, 2)
    return total_price