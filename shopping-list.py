def shopping_list():
    n = int(input())
    inputs = [[float(x[0]), int(x[1])] for x in (input().split() for _ in range(n))]

    total_price = sum(
        price * (1 - discount / 100) for price, discount in inputs
    )

    return round(total_price, 1)


print(shopping_list())