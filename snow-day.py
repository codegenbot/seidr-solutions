```
from decimal import Decimal, getcontext


def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    getcontext().prec = 50
    snow = Decimal(initial_snow)
    for _ in range(int(hours)):
        snow += Decimal(str(rate_of_snowfall)).quantize(Decimal('0.01'))
        snow -= Decimal(str(melting_rate)).quantize(Decimal('0.01'))
    return str(snow).rstrip("0").rstrip(".").replace('.', '')


hours = float(input("Enter the number of hours: "))
while hours < 0:
    print("Please enter a positive integer for the number of hours.")
    hours = float(input("Enter the number of hours: "))

initial_snow = float(input("Enter initial amount of snow: "))
while initial_snow < 0:
    print("Please enter a non-negative value for the amount of snow.")
    initial_snow = float(input("Enter initial amount of snow: "))

rate_of_snowfall = float(input("Enter rate of snow fall: "))
while rate_of_snowfall < 0:
    print("Please enter a non-negative value for the rate of snowfall.")
    rate_of_snowfall = float(input("Enter rate of snow fall: "))

melting_rate = float(input("Enter melting rate per hour: "))
while melting_rate < 0:
    print("Please enter a non-negative value for the melting rate.")
    melting_rate = float(input("Enter melting rate per hour: "))

print(snow_day(int(hours), initial_snow, rate_of_snowfall, melting_rate))