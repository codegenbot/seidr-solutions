def shopping_list():
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    quantities = list(map(int, input().split()))
    total_price = sum(((1 - d / 100) * p) for p, d in zip(prices, discounts))
    return round(sum(pq for p, q in zip(prices, quantities)) - total_price, 2)

print(shopping_list())