def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = sum(
        price - (price * discount / 100) for price, discount in zip(prices, discounts)
    )
    return (
        str(int(total_price * 1)).split(".")[0]
        + "."
        + str(int(total_price * 1)).split(".")[1]
    )