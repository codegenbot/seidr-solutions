def shopping_list():
    n = int(input())
    input_str = input()
    prices = list(map(float, input_str.split()))
    discounts = list(map(float, input().split())) * [1 for _ in range(n)]
    total_price = sum((1 - d) * p for p, d in zip(prices, discounts))
    return format(total_price, ".1f")

print(shopping_list())