```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    
    total_price = sum(price - (price * discount / 100) for price, discount in zip(prices, discounts))
    
    return round(total_price, 1)

if __name__ == '__main__':
    print(shopping_list())