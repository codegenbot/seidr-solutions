```
def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    for _ in range(hours):
        initial_snow += rate_of_snowfall
        if initial_snow > 0:
            initial_snow -= initial_snow * proportion_melting
    return initial_snow