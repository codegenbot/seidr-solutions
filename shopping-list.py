def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    
    return "{:.2f}".format(sum("{:.2f}".format(price - (price * discount / 100.0)) for price, discount in zip(prices, discounts)))

print(shopping_list())