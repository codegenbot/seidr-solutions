def shopping_list():
    n = int(input())
    prices = list(map(int, input().split()))
    discounts = list(map(int, input().split()))
    total_price = sum(
        (price - (price * discount // 100)) for price, discount in zip(prices, discounts)
    )
    print("{:.1f}".format(total_price))

shopping_list()