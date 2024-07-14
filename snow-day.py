```
import math

def snow_day():
    hours = int(input())
    initial_snow = float(input())
    rate_of_snowfall = float(input())
    melting_rate = float(input())

    total_snow = initial_snow + (rate_of_snowfall * hours) - (melting_rate * hours)

    return total_snow

print(snow_day())