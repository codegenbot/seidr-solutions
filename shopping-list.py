```
def shopping_list():
    try:
        n = int(input())
        prices = list(map(float, input().split()))
        discounts = list(map(float, input().split()))
        
        if len(prices) != len(discounts):
            raise ValueError("Price and discount lengths mismatch")
            
        total_price = sum(price - (price * discount / 100) for price, discount in zip(prices, discounts))
        return format(total_price, '.1f')
    except Exception as e:
        print(f"Error: {e}")
        return None

print(shopping_list())