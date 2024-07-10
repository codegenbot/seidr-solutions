```
from decimal import Decimal, getcontext

getcontext().prec = 28

initial_snow = Decimal(0)
while initial_snow <= 0:
    try:
        initial_snow = Decimal(float(input("Enter initial amount of snow on the ground: ")))
    except ValueError:
        print("Please enter a valid number.")

rate_of_snowfall = Decimal(0)
while rate_of_snowfall <= 0:
    try:
        rate_of_snowfall = Decimal(float(input("Enter rate of snow fall per hour: ")))
    except ValueError:
        print("Invalid input. Please enter a valid number.")

melting_rate = Decimal(0)
while melting_rate > 1 or melting_rate < 0:
    try:
        melting_rate = Decimal(float(input("Enter proportion of snow melting per hour: ")))
    except ValueError:
        print("Invalid input. Please enter a valid number.")

total_hours = int(0)
while total_hours <= 0:
    try:
        total_hours = int(float(input("Enter number of hours: ")))
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

getcontext().prec = 28
total_snow = initial_snow
for _ in range(int(total_hours)):
    total_snow += rate_of_snowfall
    total_snow -= melting_rate * total_snow

print(float(total_snow))