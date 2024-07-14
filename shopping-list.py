def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(int, input().split()))  
    total_price = 0
    for i in range(n):
        if i < len(discounts):  # Check if index is within bounds
            total_price += (1 - discounts[i] / 100) * prices[i]
    return round(total_price, 2)

print(shopping_list())