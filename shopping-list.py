def shopping_list():
    total_price = 0
    while True:
        try:
            n = int(input())
            break
        except ValueError:
            pass
    for _ in range(n):
        prices = list(map(float, input().split()))
        discounts = list(map(float, input().split()))
        temp_price = 0
        for i in range(len(prices)):
            temp_price += (1 - discounts[i] / 100) * prices[i]
        total_price += temp_price
    return round(total_price, 2)