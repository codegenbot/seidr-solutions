Here is the solution:

def snow_day(hours, initial_snow, snowfall_rate, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += snowfall_rate
        snow *= (1 - melt_rate)
    return round(snow, 6)