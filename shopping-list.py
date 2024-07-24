```
def shopping_list():
    n = int(input())
    prices = np.array(list(map(float, input().split())))
    discounts = np.array(list(map(float, input().split())))
    total_price = 0
    for i in range(n):
        total_price += (prices[i] - (prices[i] * discounts[i] / 100))
    return round(total_price, 2)

print(shopping_list())