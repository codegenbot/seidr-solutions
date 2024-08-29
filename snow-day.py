```
def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    snow_level = initial_snow
    for _ in range(hours):
        snow_level += rate_of_fall - melt_rate
    return snow_level