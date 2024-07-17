Here is the solution:

def snow_day(hours, initial_snow, rate, melt_rate):
    return round(initial_snow + (rate * hours) - (melt_rate * hours), 5)

hours = int(input())
initial_snow = float(input())
rate = float(input())
melt_rate = float(input())

print(snow_day(hours, initial_snow, rate, melt_rate))