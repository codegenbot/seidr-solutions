```
def snow_day(hours, initial_snow, rate, melt_rate):
    snow_level = initial_snow
    for _ in range(hours):
        snow_level += rate
        snow_level -= melt_rate
    return round(snow_level, 5)