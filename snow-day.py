```
from decimal import Decimal, getcontext
import math

def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    getcontext().prec = 50
    snow = Decimal(initial_snow)
    for _ in range(int(hours)):
        new_snow = snow + Decimal(rate_of_snowfall) - Decimal(melting_rate)
        snow = max(new_snow, 0.0)
    return str(snow).rstrip("0").rstrip(".").replace('.', '')

while True:
    try:
        hours = float(input("Enter the number of hours: "))
        if hours < 0:
            print("Please enter a positive integer for the number of hours.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter an integer value.")

while True:
    try:
        initial_snow = float(input("Enter initial amount of snow: "))
        if initial_snow < 0:
            print("Please enter a non-negative value for the amount of snow.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a floating-point number value.")

while True:
    try:
        rate_of_snowfall = float(input("Enter rate of snow fall: "))
        if rate_of_snowfall < 0:
            print("Please enter a non-negative value for the rate of snowfall.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a floating-point number value.")

while True:
    try:
        melting_rate = float(input("Enter melting rate per hour: "))
        if melting_rate < 0:
            print("Please enter a non-negative value for the melting rate.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a floating-point number value.")

print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))