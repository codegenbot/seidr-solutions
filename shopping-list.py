```
def shopping_list():
    n = int(input())
    prices_and_discounts = [list(map(float, input().split())) for _ in range(n)]
    total_price = sum(p * (1 - d/100) for p, d in zip(*prices_and_discounts))
    print("{:.1f}".format(total_price))