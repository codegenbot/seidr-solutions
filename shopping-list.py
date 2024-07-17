prices = []
discounts = []
temp = list(map(float, input().strip().split()))
while len(temp) > 0:
    if len(temp) % 2 != 0:  
        print("Invalid input. Please provide price and discount as two separate float values.")
        temp = list(map(float, input().strip().split()))
    else:
        for i in range(0, len(temp), 2):
            prices.append(temp[i])
            discounts.append(temp[i+1] / 100)
        temp = []
user_input = input("Do you want to continue? (yes/no): ")
while user_input.lower() != "no":
    if user_input.lower() != "yes":
        print("Invalid input. Please provide 'yes' or 'no'.")
    user_input = input("Do you want to continue? (yes/no): ")
print("%.1f" % sum(p * d for p, d in zip(prices, discounts)))