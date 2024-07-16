```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    new_snow = 0
    for _ in range(hours):
        new_snow += rate_of_snowfall
    total_melting = new_snow * melting_rate
    return round(initial_snow + new_snow - total_melting, 2)

hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))