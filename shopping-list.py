```
def shopping_list():
    n = int(input())
    result = f"Prices and Discounts:\n"
    total_price = 0
    for _ in range(n):
        price = float(input())
        discount = float(input()) / 100
        discounted_price = round(price * (1 - discount/100), 2)
        total_price += discounted_price
        result += f"{price:.2f} @ {discount*100}%: {discounted_price:.2f}\n"
    return f"Total: {total_price:.2f}\n{result}"