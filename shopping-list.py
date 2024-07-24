```
def shopping_list():
    n = int(input())
    
    # Round 1
    prices1 = list(map(float, input().split()))
    discounts1 = list(map(float, input().split()))

    total_price = sum(
        price * (1 - discount / 100) for price, discount in zip(prices1, discounts1)
    )

    # Round 2
    prices2 = list(map(float, input().split()))
    discounts2 = list(map(float, input().split()))

    total_price += sum(
        price * (1 - discount / 100) for price, discount in zip(prices2, discounts2)
    )
    
    return "{:.2f}".format(total_price)