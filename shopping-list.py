```
def shopping_list():
    try:
        total_discount = float(input()) / 100
        n = int(input())
        result = "Prices and Discounts:\n"
        total_price = 0
        for _ in range(n):
            price = float(input())
            discount = float(input()) / 100
            item_total = price * (1 - total_discount - discount)
            total_price += item_total
            result += f"{price:.2f} @ {discount*100}%: {item_total:.2f}\n"
        return f"Total: {total_price:.2f}\n{result}"
    except Exception as e:
        print(f"An error occurred: {e}")