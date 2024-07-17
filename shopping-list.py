def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_discount = sum(discounts) / 100
    print("{:.1f}".format(sum(p * (1 - total_discount / n) for p in prices)))