def shopping_list():
    prices_discounts = [float(x) for x in input().split()]
    total_price = sum(
        price * (1 - discount / 100)
        for price, discount in zip(
            prices_discounts[len(prices_discounts) // 2 :],
            prices_discounts[: len(prices_discounts) // 2],
        )
    )

    return "{:.2f}".format(total_price)


if __name__ == "__main__":
    print(shopping_list())