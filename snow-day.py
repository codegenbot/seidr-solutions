```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = initial_snow
    for _ in range(int(hours)):
        total_snow += int(rate_of_snowfall)
        total_snow -= total_snow * melting_rate
    return round(total_snow, 2)

hours = float(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melting_rate = float(input())

print(snow_day(hours, initial_snow, rate_of_snowfall, melting_rate))