def shopping_list():
    n = int(input())
    total_price = 0

    for _ in range(n):
        item_prices = list(map(float, input().split()))
        discount = float(input()) / 100
        subtotal = sum(item_prices) * (1 - discount)
        total_price += subtotal

    print(format(total_price, ".2f"))