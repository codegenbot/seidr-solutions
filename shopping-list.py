def shopping_list():
    total_price = 0

    item_prices = list(map(float, input().split()))
    num_items = int(input())
    discount = float(input()) / 100

    subtotal = sum([p * (1 - discount) for p in item_prices])
    total_price += subtotal
    return format(total_price, ".2f")