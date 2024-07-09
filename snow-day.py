```
from decimal import Decimal, getcontext

getcontext().prec = 28 

while True:
    try:
        initial_snow = Decimal(float(input("Enter initial amount of snow on the ground: ")))
        if initial_snow > 0:
            break
        else:
            print("Please enter a positive value for initial snow.")
    except ValueError:
        print("Invalid input. Please enter a number.")

while True:
    try:
        rate_of_snowfall = Decimal(float(input("Enter rate of snow fall per hour: ")))
        if rate_of_snowfall > 0:
            break
        else:
            print("Please enter a positive value for snowfall rate.")
    except ValueError:
        print("Invalid input. Please enter a number.")

while True:
    try:
        melting_rate = float(input("Enter proportion of snow melting per hour: "))
        if 0 <= melting_rate <= 1:
            break
        else:
            print("Please enter a value between 0 and 1.")
    except ValueError:
        print("Invalid input. Please enter a number.")

total_hours = int(input("Enter number of hours: "))

total_snow = initial_snow
for _ in range(total_hours): 
    total_snow += rate_of_snowfall
    total_snow -= Decimal(melting_rate) * total_snow

print(float(total_snow))