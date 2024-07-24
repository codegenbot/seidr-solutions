```
def shopping_list():
    n = int(input())
    prices = [float(i) for i in input().split()]
    discount_rates = [float(i) for i in input().split()]
    
    total_price = sum([price * (1 - discount_rate / 100) for price, discount_rate in zip(prices, discount_rates)])
    
    return str(round(total_price, 1))

print(shopping_list())