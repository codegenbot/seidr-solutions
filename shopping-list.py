def shopping_list():
    n = int(input())
    input_str = input()
    prices = list(map(float, input_str.split()))
    discounts = list(map(float, input().split()))
    total_price = 0
    for i in range(n):
        total_price += (prices[i] * (1 - discounts[i]/100))
    return format(total_price, ".2f")


print(shopping_list())