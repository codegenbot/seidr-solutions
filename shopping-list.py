```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    
    # Check if inputs have enough values
    while len(prices) < n or len(discounts) < n:
        print("Invalid input. Please provide {} prices and {} discounts.".format(n, n))
        n = int(input())
        prices = list(map(float, input().split()))
        discounts = list(map(float, input().split()))

    total_price = 0
    for i in range(min(n, len(prices))):
        total_price += (1 - discounts[i] / 100) * prices[i]
    return format(total_price, ".1f")


print(shopping_list())