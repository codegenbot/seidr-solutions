```
while True:
    try:
        price, discount = map(float, input().strip().split())
        prices_and_discounts.append((price, (100 - discount) / 100.0))
    except ValueError:
        print("Invalid input. Please provide price and discount as two separate float values.")
    user_input = input("Do you want to continue? (yes/no): ")
    if user_input.lower() != "yes":
        break
print("%.1f" % sum(price * discount for price, discount in prices_and_discounts))