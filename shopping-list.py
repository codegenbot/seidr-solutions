```
# You can add comments here or print statements if you want
# This is a comment and the code will not execute it

def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = [float(x) for _ in range(n)]
    for i in range(n):
        discounts[i] = float(input())
    total_price = sum(
        price * (1 - discount) for price, discount in zip(prices, discounts)
    )
    print("{:.2f}".format(total_price))