def shopping_list():
    n = int(input())
    total_price = 0
    for _ in range(n):
        price_and_discount = list(map(float, input().split()))
        if len(price_and_discount) < 2:
            return sum(price_and_discount[:-1]) - sum([p * d/100 for p, d in zip(price_and_discount[::2], price_and_discount[1::2])])
    return format(sum(price_and_discount[:-1]) - sum([p * d/100 for p, d in zip(price_and_discount[::2], price_and_discount[1::2])]), ".2f")