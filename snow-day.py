```
def snow_day(hours, initial_snow, rate, melt_rate):
    total_snow = round(initial_snow, 2)
    for _ in range(hours):
        total_snow += rate
        total_snow -= min(total_snow, melt_rate)
    return round(total_snow, 2)