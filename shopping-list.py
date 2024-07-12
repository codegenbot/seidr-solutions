```
def shopping_list():
    n = int(input())
    total_price = 0
    if n > 0:
        prices_and_discounts = list(map(float, input().split()))
        for i in range(n*2):
            if i % 2 == 0:
                price = prices_and_discounts[i]
            else:
                discount = prices_and_discounts[i] / 100
                total_price += price * (1 - discount)
    return round(total_price, 2)

print(shopping_list())