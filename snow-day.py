Here is the solution:

def snow_day(hours, ground_snow, rate_snow, melt_rate):
    return ground_snow + (rate_snow * hours) - (melt_rate * hours)

hours = int(input())
ground_snow = float(input())
rate_snow = float(input())
melt_rate = float(input())

print(snow_day(hours, ground_snow, rate_snow, melt_rate))