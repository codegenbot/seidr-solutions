def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0
    discounted_prices = [price * (1 - discount/100) for price, discount in zip(prices, discounts)]
    for discounted_price in discounted_prices:
        total_price += discounted_price
    return round(total_price, 2)