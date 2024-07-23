def shopping_list():
    prices = list(map(float, input().split()))
    n = len(prices)
    for i in range(n):
        print(f"Price: {prices[i]}, Discount: {100 - int(100*discounts[i])}%")