```
def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    snow = initial_snow
    for _ in range(hours):
        snow += rate_of_snowfall - (proportion_melting * snow)
    return round(snow, 6)