prices = []
discounts = []
while True:
    temp = input().strip().split()
    if len(temp) % 2 != 0:  
        print("Invalid input. Please provide price and discount as two separate float values.")
    else:
        prices += list(map(float, temp[::2]))
        discounts += list(map(lambda x: float(x)/100, temp[1::2]))
    user_input = input("Do you want to continue? (yes/no): ")
    if user_input.lower() != "yes":
        break
print("%.1f" % sum(p * d for p, d in zip(prices, discounts)))