Here is the solution:

def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    return round(initial_snow + (rate_of_snowfall * hours) - ((melt_rate * hours) if melt_rate != 0 else 0), 6)

hours = int(input())
initial_snow = float(input())
rate_of_snowfall = float(input())
melt_rate = float(input())

print(snow_day(hours, initial_snow, rate_of_snowfall, melt_rate))