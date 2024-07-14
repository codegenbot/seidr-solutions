def shopping_list():
    n = int(input())
    total_price = 0
    for _ in range(n):
        price_and_discount = list(map(float, input().split()))
        if len(price_and_discount) < 2:
            return "Invalid input"
        price = price_and_discount[0]
        discount = price_and_discount[1] / 100
        total_price += price * (1 - discount)
    return format(total_price, ".2f")

print(shopping_list())