def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    input_prices = list(map(float, (input().split())[1:]))
    input_discounts = list(map(float, (input().split())[1:]))
    total_price = sum(price * (1 - discount / 100) for price, discount in zip(input_prices, input_discounts))
    return format(total_price, ".1f")


print(shopping_list())