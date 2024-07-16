def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(int, input().split()))  
    total_price = sum(
        price - (price * d / 100) for price, d in zip(prices, discounts)
    )
    return format(total_price, ".2f")  

print(shopping_list())