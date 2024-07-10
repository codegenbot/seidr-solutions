def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(int, input().split())) 
    total_price = sum(
        price * (1 - discount / 100) for price, discount in zip(prices, discounts)
    )
    print(format(total_price, ".2f"))


shopping_list()