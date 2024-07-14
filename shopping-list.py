def shopping_list():
    n1 = int(input())
    prices = []
    discounts = []
    
    for _ in range(n1):
        price = float(input())
        prices.append(price)
        
    for _ in range(n1):
        discount = float(input()) / 100
        discounts.append(discount)
        
    total_price = sum([price * (1 - discount) for price, discount in zip(prices, discounts)])
    
    n2 = int(input())
    prices.extend([float(input()) for _ in range(n2)])
    discounts.extend([(float(input()) / 100) for _ in range(n2)])
    
    total_price = sum([price * (1 - discount) for price, discount in zip(prices, discounts)])
    
    return format(total_price, ".2f")