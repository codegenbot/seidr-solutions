def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    total_price = sum(price * (1 - float(input()) / 100) for _ in range(n))
    print("{:.2f}".format(total_price))