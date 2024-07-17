def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    
    total_price = sum((int(prices[i] * (1 - discounts[i]/100)) for i in range(n)))
    
    print("{:.1f}".format(total_price))