```
from decimal import Decimal, getcontext


def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    getcontext().prec = 50
    snow = Decimal(initial_snow)
    for _ in range(int(hours)):
        snow += Decimal(str(rate_of_snowfall)).quantize(Decimal("0.01"))
        snow -= Decimal(str(melting_rate)).quantize(Decimal("0.01"))
    return str(snow).rstrip("0").rstrip(".").replace(".", "")


hours = None
while hours is None or hours < 0:
    hours = float(input("Enter the number of hours: "))
    if hours < 0:
        print("Please enter a positive integer for the number of hours.")

initial_snow = None
while initial_snow is None or initial_snow < 0:
    initial_snow = float(input("Enter initial amount of snow: "))
    if initial_snow < 0:
        print("Please enter a non-negative value for the amount of snow.")

rate_of_snowfall = None
while rate_of_snowfall is None or rate_of_snowfall < 0:
    rate_of_snowfall = float(input("Enter rate of snow fall: "))
    if rate_of_snowfall < 0:
        print("Please enter a non-negative value for the rate of snowfall.")

melting_rate = None
while melting_rate is None or melting_rate < 0:
    melting_rate = float(input("Enter melting rate per hour: "))
    if melting_rate < 0:
        print("Please enter a non-negative value for the melting rate.")

print(
    snow_day(
        int(hours), float(initial_snow), float(rate_of_snowfall), float(melting_rate)
    )
)