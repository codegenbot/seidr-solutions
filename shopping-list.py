def shopping_list():
    n = int(input())
    prices = [float(x) for x in input().split()]
    discounts = [float(x) for x in input().split()]
    total_price = 0
    for i in range(n):
        price = prices[i]
        discount = discounts[i]
        total_price += price - (price * discount / 100)
    return round(total_price, 2)


print(shopping_list())