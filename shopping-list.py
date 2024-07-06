def shopping_list(prices, discounts, total_price):
    """
    Calculate the total price of a shopping list with discounts applied.
    Parameters:
        prices (list): List of float prices for each item in the shopping list.
        discounts (list): List of float discounts for each item in the shopping list, as percentages (e.g. 20 for a 20% discount).
    Returns:
        float: The total price of the shopping list with discounts applied.
    """
    # Validate input
    if len(discounts) < len(prices):
        discounts += [0] * (len(prices) - len(discounts))

    for i in range(len(prices)):
        try:
            price = float(prices[i])
            discount = float(discounts[i]) / 100
            total_price += price * (1 - discount)
        except ValueError:
            print("Invalid price or discount! Please enter a valid number.")
            return None

    # Round result to two decimal places
    total_price = round(total_price, 2)
    return total_price