```
def shopping_list():
    n = int(input())
    prices = []
    discounts = []
    for _ in range(n):
        line = input().split()
        if len(line) >= 2:
            price = float(line[0])
            discount = float(line[1]) / 100
            prices.append(price)
            discounts.append(discount)
        else:
            return None 
    total_price = 0
    for i in range(n):
        total_price += prices[i] * (1 - discounts[i])
    return round(total_price, 2)

print(shopping_list())