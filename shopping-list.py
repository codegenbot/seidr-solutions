def shopping_list():
    n = int(input())
    prices = []
    
    for _ in range(n):
        price = float(input())
        prices.append(price)
        
    total_price = sum([price * (1 - float(input()) / 100) for _ in range(n)])
    
    return format(total_price, ".2f")