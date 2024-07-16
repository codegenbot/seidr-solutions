```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    new_snow = 0
    current_snow = initial_snow
    for _ in range(hours):
        new_snow += rate_of_snowfall
        current_snow += new_snow - (current_snow * melting_rate)
    return round(current_snow, 2)

hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))