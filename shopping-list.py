```
def shopping_list():
    n = int(input())
    prices1 = list(map(float, input().split()))
    discounts1 = list(map(float, input().split()))
    
    prices2 = list(map(float, input().split()))
    discounts2 = list(map(float, input().split()))

    total_price1 = sum(
        price * (1 - discount / 100) for price, discount in zip(prices1, discounts1)
    )
    total_price2 = sum(
        price * (1 - discount / 100) for price, discount in zip(prices2, discounts2)
    )

    return round(total_price1 + total_price2, 2)