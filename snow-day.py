from decimal import Decimal, getcontext
getcontext().prec = 28

def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    current_snow = Decimal(initial_snow)
    for _ in range(hours):
        current_snow += Decimal(rate_of_snowfall) - (current_snow * Decimal(melting_rate))
    return float(current_snow)

hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))