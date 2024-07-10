Here is the solution:

def snow_day(hours, initial_snow, snowfall_rate, melt_rate):
    return initial_snow + (snowfall_rate * hours) - (melt_rate * hours)

# Example usage:
hours = int(input())
initial_snow = float(input())
snowfall_rate = float(input())
melt_rate = float(input())

result = snow_day(hours, initial_snow, snowfall_rate, melt_rate)
print(result)