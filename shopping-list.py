```
def shopping_list():
    n = int(input())
    prices = list(map(float, [input().split()][0] * n))
    discounts = list(map(float, [input().split()][0] * n))

    total_price = 0
    for i in range(n):
        price = prices[i]
        discount = (discounts[i] / 100) * price
        total_price += price - discount

    return round(total_price, 1)

print(shopping_list())