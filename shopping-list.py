def shopping_list():
    n = int(input())
    total_price = 0
    for _ in range(n):
        price = float(input())
        discount = float(input()) / 100
        discounted_price = round(price * (1 - discount), 2)
        total_price += discounted_price
    return f"Total: {total_price:.2f}"