def shopping_list():
    n = int(input())
    result = "Prices and Discounts:\n"
    total_price = 0
    for _ in range(n):
        price = float(input())
        discount = float(input()) / 100
        total_price += price - (price * discount)
        result += f"{price:.2f} @ {discount*100}%: {price - (price * discount)}\n"
    return f"Total: {total_price:.2f}\n{result}"