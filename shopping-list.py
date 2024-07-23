def shopping_list():
    n = int(input())
    result = "Prices and Discounts:\n"
    total_price = 0
    for _ in range(n):
        price = float(input())
        discount = float(input()) / 100
        item_discounted = round(price * (1 - discount), 2)
        result += f"{price:.2f} @ {discount*100}%: {item_discounted}\n"
        total_price += item_discounted
    return f"Total: {total_price:.2f}\n{result}"