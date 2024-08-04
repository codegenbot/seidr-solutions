def shopping_list():
    num_items = int(input())
    prices = [float(x) for x in input().split()]
    discounts = [float(x) for x in input().split()]

    total_price = sum(
        prices[i] - (prices[i] * discounts[i]) / 100 for i in range(num_items)
    )

    return round(total_price, 1)


print(shopping_list())