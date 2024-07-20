```
def snow_day(hours, initial_snow, rate, melt_rate):
    total_snow = round(initial_snow + (rate * hours), 5)
    for _ in range(hours):
        total_snow += round(rate, 5)
        total_snow -= min(total_snow, round(melt_rate, 5))
    return round(total_snow, 5)