```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    return round(initial_snow + (rate_of_snowfall * hours) - (melting_rate * hours), 2)

hours = float(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))