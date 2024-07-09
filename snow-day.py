import math
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    return math.floor(initial_snow + (rate_of_snowfall * hours) - (melting_rate * hours))

hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))