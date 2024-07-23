```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    current_snow = float(initial_snow)
    for _ in range(hours):
        current_snow += rate_of_snowfall
        current_snow -= min(current_snow, (1 / 1000) * melting_rate)
    return current_snow