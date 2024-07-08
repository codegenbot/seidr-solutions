```
def shopping_list():
    num_items = int(input("Enter number of items: "))
    prices = list(map(float, input(f"Enter {num_items} prices (space-separated):").split()))
    discounts = list(map(float, input(f"Enter {num_items} discounts (percent, space-separated):").split()))

    total_price = sum(
        price * (1 - discount / 100) for price, discount in zip(prices, discounts)
    )

    return format(total_price, ".2f")