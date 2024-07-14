def shopping_list(price, discount):
    total_price = 0
    for i in range(len(price)):
        item_price = price[i] - (price[i] * discount[i]) / 100
        total_price += item_price
    return total_price


n = int(input())
price = list(map(float, input().split()))
discount = list(map(float, input().split()))

print("{:.1f}".format(shopping_list(price, discount)))