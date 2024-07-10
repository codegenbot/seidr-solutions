```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0
    min_length = min(len(prices), len(discounts))
    for i in range(min_length):
        price = prices[i] * (1 - discounts[i] / 100)
        total_price += price
    return round(total_price, 2)


print(shopping_list())