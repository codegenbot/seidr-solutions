```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    total_snow = round(initial_snow, 2)
    for _ in range(hours):
        total_snow += rate_of_snowfall
        if total_snow > 0:
            total_snow -= min(total_snow, melting_rate)
    return total_snow