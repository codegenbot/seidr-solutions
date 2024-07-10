```
def snow_day(hours, initial_snow, rate, melt_rate):
    snow = initial_snow
    for _ in range(hours):
        snow += rate
        snow -= min(snow, rate * melt_rate)
    return snow