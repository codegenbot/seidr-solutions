```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    current_snow = initial_snow
    for _ in range(hours):
        current_snow += rate_of_snowfall
        melted_snow = min(current_snow * melting_rate, current_snow)
        current_snow -= melted_snow

    return current_snow