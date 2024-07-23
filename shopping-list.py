```
def shopping_list():
    n = int(input())
    result = "Prices and Discounts:\n"
    total_price = 0
    for _ in range(n):
        price = float(input())
        discount = float(input()) / 100
        result += f"{price:.2f} @ {discount*100}%: {round(price * (1 - discount), 2)}\n"
        total_price += round(price * (1 - discount), 2)
    return f"Total: {total_price:.2f}\n{result}"