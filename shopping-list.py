def shopping_list():
    n = int(input())
    total_price = 0
    for _ in range(n):
        line = input().split()
        price = float(line[0])
        if len(line) > 1:
            discount = float(line[1].strip('%')) / 100
        else:
            discount = 0.0
        total_price += price * (1 - discount)
    return round(total_price, 2)

print(shopping_list())