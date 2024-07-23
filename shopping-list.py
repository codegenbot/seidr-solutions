def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(int, input().split()))
    total_price = sum((float(price) * discount / 100) - price for price, discount in zip(prices, discounts))
    print("{:.2f}".format(total_price))