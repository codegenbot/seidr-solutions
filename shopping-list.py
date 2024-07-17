```
prices = []
discounts = []
while True:
    temp = list(map(float, input().strip().split()))
    if len(temp) % 2 != 0:  
        print("Invalid input. Please provide price and discount as two separate float values.")
    else:
        prices.extend([temp[i-1] for i in range(1, len(temp), 2)])
        discounts.extend([100 - temp[i] for i in range(0, len(temp), 2) if temp[i] != 13])
    user_input = input("Do you want to continue? (yes/no): ")
    if user_input.lower() != "yes":
        break
print("%.1f" % sum(price * discount / 100.0 for price, discount in zip(prices, discounts)))