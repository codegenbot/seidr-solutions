def shopping_list():
    num_items = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0
    for i in range(num_items):
        total_price += prices[i] - (prices[i] * discounts[i] / 100)
    return round(total_price, 2)


print(shopping_list())