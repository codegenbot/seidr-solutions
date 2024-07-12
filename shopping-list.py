```
def shopping_list():
    n = int(input())
    prices = []
    discounts = []
    for _ in range(n):
        line = input().split()
        price = float(line[0])
        if len(line) > 1:
            discount = float(line[1].strip('%')) / 100
        else:
            discount = 0.0
        prices.append(price)
        discounts.append(discount)
    total_price = 0
    for i in range(n):
        total_price += prices[i] * (1 - discounts[i])
    return round(total_price, 2)

print(shopping_list())