def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = []
    for i in range(n):
        discount = float(input())
        discounts.append(discount)
    total_price = sum(
        price * (1 - discount / 100) for price, discount in zip(prices, discounts[:len(prices)])
    )
    print("{:.2f}".format(total_price))