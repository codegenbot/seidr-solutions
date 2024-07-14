def shopping_list():
    n = int(input())
    prices = []
    discounts = []
    
    for _ in range(n):
        price = float(input())
        prices.append(price)
        
    for _ in range(n):
        discount = float(input()) / 100
        discounts.append(discount)
        
    total_price = sum([price * (1 - discount) for price, discount in zip(prices, discounts)])
    
    return format(total_price, ".2f")