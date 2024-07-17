```
prices_and_discounts = []
while True:
    try:
        temp = list(map(float, input().strip().split()))
        if len(temp) >= 2: 
            prices = [temp[0]]
            discounts = [(100 - temp[1]) / 100.0]
            prices_and_discounts.append(list(zip(prices, discounts)))
        if len(temp) == 2: break
    except ValueError:
        print("Invalid input. Please provide price and discount as two separate float values.")
print("%.1f" % sum(price * discount for price, discount in prices_and_discounts))