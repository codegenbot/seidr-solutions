```
def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    snow = initial_snow
    for _ in range(hours):
        new_fall = rate_of_snowfall
        snow += new_fall
        melted = snow * proportion_melting
        snow -= melted
    return round(snow, 6)