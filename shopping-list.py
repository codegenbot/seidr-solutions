def shopping_list():
    n = int(input())
    result = "Prices and Discounts:\n"
    total_price = 0
    for _ in range(n):
        price = float(input())
        discount = float(input()) / 100
        undiscounted_price = round(price, 2)
        discounted_price = round(undiscounted_price * (1 - discount), 2)
        total_price += discounted_price
        result += f"{price:.2f} @ {discount*100}%: {round(discounted_price, 2)}\n"
    return f"Total: {total_price:.2f}\n{result}"