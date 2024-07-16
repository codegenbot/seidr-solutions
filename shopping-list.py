```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    
    if len(prices) != len(discounts):
        return sum(
            price * (1 - discount / 100) for price, discount in zip(prices, discounts)
        )
    else:
        total_price = sum(
            price * (1 - discount / 100) for price, discount in zip(prices, discounts)
        )
        
        return round(total_price,2)