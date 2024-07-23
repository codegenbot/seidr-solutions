def shopping_list():
    n = int(input())
    for i in range(n):
        price = float(input())
        discount = float(input()) / 100
        discounted_price = round(price * (1 - discount), 2)
        print(f"Item {i+1}: {discounted_price}")
        print(f"Total: {round(discounted_price, 2)}")