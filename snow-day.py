```
def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    snow = initial_snow
    for _ in range(hours):
        new_snow = snow + rate_of_snowfall - (snow * proportion_melting)
        snow = round(new_snow, 6)
    return snow