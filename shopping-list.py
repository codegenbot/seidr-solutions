def shopping_list():
    try:
        n = int(input())
        total_price = 0
        for _ in range(n):
            price = float(input())
            discount = float(input()) / 100
            total_price += round(price * (1 - discount), 2)
        return f"{total_price:.2f}"
    except Exception as e:
        print(f"An error occurred: {e}")