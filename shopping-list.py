```
def shopping_list():
    n = int(input())
    result = "Prices and Discounts:\n"
    total_price = 0
    for _ in range(n):
        price = float(input())
        discount = float(input()) / 100
        item_price_after_discount = round(price * (1 - discount), 2)
        result += f"{price:.2f} @ {discount*100}%: {item_price_after_discount}\n"
        total_price += item_price_after_discount
    return f"Total: {total_price:.2f}\n{result}"