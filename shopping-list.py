def shopping_list():
    num_items = int(input())
    prices = [float(x) for x in input().split()]
    discounts = [float(x) for x in input().split()]

    total_price = 0
    for i in range(num_items):
        price = prices[i]
        discount = price * (1 - discounts[i] / 100)
        total_price += max(0, min(price, discount))

    return "{:.1f}".format(total_price)


print(shopping_list())