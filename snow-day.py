```
def snow_day(hours, initial_snow, rate_of_snowfall, melting_rate):
    current_snow = initial_snow
    for _ in range(hours):
        melted_snow = current_snow - (current_snow * melting_rate)
        current_snow += rate_of_snowfall
        current_snow -= melted_snow

    return current_snow