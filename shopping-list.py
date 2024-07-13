def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    discounts = [float(x) / 100 for x in discounts]
    total_price = sum(price * (1 - discount) for price, discount in zip(prices, discounts))
    return total_price