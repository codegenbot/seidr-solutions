```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    
    if len(prices) != n or len(discounts) != n:
        return 

    total_price = 0
    for i in range(min(n, len(prices))):
        price = prices[i] * (1 - discounts[i] / 100)
        total_price += price
    return total_price

print(shopping_list())