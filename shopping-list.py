def shopping_list():
    n = int(input())
    total_discount = 0

    for _ in range(n):
        item_prices = [float(price) for price in input().split()]
        total_price = sum(item_prices)
        discount = float(input()) / 100
        discounted_price = sum([price - (price * discount) for price in item_prices])
        total_discount += discounted_price
        print(discounted_price, end=' ')
    return format(total_discount, ".2f")

print(shopping_list())