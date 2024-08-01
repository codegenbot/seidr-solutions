def shopping_list():
    num_items = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0.0
    for i in range(num_items):
        price = prices[i]
        discount = (100 - discounts[i]) / 100
        discounted_price = price * discount
        total_price += discounted_price
    return float(format(total_price, ".1f"))


print(shopping_list())