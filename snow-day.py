```
from decimal import Decimal, getcontext

def snow_day():
    getcontext().prec = 28 
    while True:
        try:
            hours = float(input("Enter number of hours: "))
            if hours > 0:
                break
            else:
                print("Please enter a positive integer.")
        except ValueError:
            print("Invalid input. Please enter a number.")

    initial_snow = Decimal(float(input("Enter initial amount of snow on the ground: ")))
    while True:
        try:
            rate_of_snowfall = Decimal(float(input("Enter rate of snow fall per hour: ")))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")

    while True:
        try:
            melting_rate = Decimal(float(input("Enter proportion of snow melting per hour: ")))
            if 0 <= melting_rate <= 1:
                break
            else:
                print("Please enter a value between 0 and 1.")
        except ValueError:
            print("Invalid input. Please enter a number.")

    total_snow = Decimal(initial_snow)
    for _ in range(int(hours)): 
        total_snow += rate_of_snowfall
        total_snow -= melting_rate * total_snow / (1 if total_snow > 0 else 1)

    return float(total_snow)

print(snow_day())