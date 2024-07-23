def shopping_list():
    n = int(input())
    total_price = 0
    for i in range(n):
        price = float(input())
        discount = float(input()) / 100
        discounted_price = round(price * (1 - discount), 2)
        print(f"Item {i+1}: {discounted_price}")
        total_price += discounted_price
    print(f"Total: {round(total_price, 2)}")