Here is the completed code:

def snow_day(hours, initial_snow, rate, melt_rate):
    return initial_snow + (rate * hours) - (melt_rate * hours)

# example usage:
hours = int(input())
initial_snow = float(input())
rate = float(input())
melt_rate = float(input())

print(snow_day(hours, initial_snow, rate, melt_rate))