```
def snow_day(hours, initial_snow, rate_of_fall, melt_rate):
    total_snow = round(initial_snow, 5)
    for _ in range(hours):
        total_snow += rate_of_fall
        total_snow -= min(total_snow, melt_rate)
    return round(total_snow, 5)