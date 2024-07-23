def shopping_list():
    n = int(input())
    result = "Prices and Discounts:\n"
    total_price = 0
    for _ in range(n):
        price = float(input())
        discount = float(input()) / 100
        item_total = price * (1 - discount)
        result += f"{price:.2f} @ {discount*100}%: {(price*(1-discount)).round(2)}\n"
        total_price += item_total
    return f"Total: {total_price:.2f}\n{result}"