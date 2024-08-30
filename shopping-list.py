```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(int, input().split()))
    total_price = sum([p - (p * d / 10000) for p, d in zip(prices, discounts)])
    print(format(total_price, ".1f"))


shopping_list()