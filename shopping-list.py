```
def shopping_list():
    n = int(input())
    total_price = 0

    for _ in range(n):
        line = input().split()
        if len(line) != 2:
            print("Invalid input. Please enter price and discount separately.")
            return None
        try:
            price, discount = float(line[0]), int(line[1])
            total_price += price * (1 - discount / 100)
        except ValueError:
            print("Invalid input. Please ensure that the first value is a number and the second is an integer.")

    return round(total_price, 1)


print(shopping_list())