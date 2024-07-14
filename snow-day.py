```
from math import floor


def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    snow = float(initial_snow)
    for _ in range(int(hours)):
        snow += rate_of_snowfall
        snow -= min(snow, melting_rate)
    return str(format(floor(snow + 0.0001), ".2f")).lstrip("0").rstrip(".")


while True:
    try:
        hours = int(input("Enter the number of hours: "))
        if hours < 0:
            print("Please enter a positive integer for the number of hours.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

while True:
    try:
        initial_snow = float(input("Enter initial amount of snow: "))
        if initial_snow < 0:
            print("Please enter a non-negative value for the amount of snow.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

while True:
    try:
        rate_of_snowfall = float(input("Enter rate of snow fall: "))
        if rate_of_snowfall < 0:
            print("Please enter a non-negative value for the rate of snowfall.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

while True:
    try:
        melting_rate = float(input("Enter melting rate per hour: "))
        if melting_rate < 0:
            print("Please enter a non-negative value for the melting rate.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

print(
    snow_day(hours, initial_snow, rate_of_snowfall, melting_rate)
)