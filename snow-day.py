from decimal import Decimal, getcontext


def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    getcontext().prec = 50
    snow = Decimal(initial_snow)
    for _ in range(hours):
        new_snow = snow + Decimal(rate_of_snowfall) - Decimal(melting_rate)
        snow = max(new_snow, 0.0)
    return str(snow).rstrip("0").rstrip(".")


hours = int(input("Enter the number of hours: "))
initial_snow = float(input("Enter initial amount of snow: "))
rate_of_snowfall = float(input("Enter rate of snow fall: "))
melting_rate = float(input("Enter melting rate per hour: "))

print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))