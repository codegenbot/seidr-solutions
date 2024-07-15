def shopping_list():
    n = int(input())
    input_str = input()
    prices = list(map(float, input_str.split()))
    discounts = [float(i) / 100 for i in input().split() for _ in range(n)]
    total_price = 0
    for i in range(n):
        total_price += (1 - discounts[i]) * prices[i]
    return format(total_price, ".1f")

print(shopping_list())