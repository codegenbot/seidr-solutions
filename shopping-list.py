```
def shopping_list():
    try:
        n = int(input())
        total_price = 0
        for _ in range(n):
            price = float(input())
            discount = float(input()) / 100
            discounted_price = price * (1 - discount)
            print(f"Price: {price:.2f}, Discount: {discount*100:.2f}% => {discounted_price:.2f}")
            total_price += discounted_price
        return f"Total: {total_price:.2f}\n"
    except Exception as e:
        print(f"An error occurred: {e}")