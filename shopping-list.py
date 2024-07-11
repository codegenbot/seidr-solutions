def shopping_list():
    n = int(input())
    prices, discounts = [float(x) for x in input().split()], [float(x) for x in input().split()]

    total_price = 0
    for i in range(n):
        if i < len(prices) and i < len(discounts): 
            price = prices[i] * ((100 - discounts[i]) / 100)
            if price >= 0:
                total_price += price

    return round(total_price, 2)