def shopping_list():
    n = int(input())
    input_str = input()
    prices = list(map(float, input_str.split()))
    discounts = list(map(float, (input_str + " ") * n).split()[:len(prices)])
    total_price = 0
    for i in range(n):
        total_price += (1 - discounts[i] / 100) * prices[i]
    return format(total_price, ".1f")


print(shopping_list())