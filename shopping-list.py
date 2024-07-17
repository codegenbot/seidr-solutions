```
prices_and_discounts = []
while True:
    temp = list(map(float, input().strip().split()))
    if len(temp) != 2:
        print("Invalid input. Please provide price and discount as two separate float values.")
    else:
        prices_and_discounts.append((temp[0], (100 - temp[1]) / 100.0))
    if input("Continue? (yes/no): ") != "yes":
        break
print("%.1f" % sum(price * discount for price, discount in prices_and_discounts))