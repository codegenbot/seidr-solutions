prices = []
discounts = []
while True:
    temp = list(map(float, input().strip().split()))
    if len(temp) % 2 != 0:  
        print("Invalid input. Please provide price and discount as two separate float values.")
    else:
        prices.extend(temp[::2])
        discounts.extend(map(lambda x: (100 - x) / 100.0, temp[1::2]))
    user_input = input("Do you want to continue? (yes/no): ")
    if user_input.lower() != "yes":
        break
print("%.1f" % sum(p * d for p, d in zip(prices, discounts)))