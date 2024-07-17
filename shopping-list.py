```
def shopping_list():
    n = int(input())
    total_price = 0
    for _ in range(n):
        p, d = map(float, input().split())
        total_price += p * (1 - d / 100)
    print("{:.1f}".format(total_price))