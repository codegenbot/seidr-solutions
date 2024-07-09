def shopping_list():
    n = int(input())
    prices = list(map(float, input().strip().split()))
    discounts = list(map(float, input().strip().split()))
    total_price = sum(price - (price * discount / 100) for price, discount in zip(prices, discounts))
    return str(format(total_price, ".1f"))