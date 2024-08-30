```
def snow_day(hours, initial_snow, rate_of_snowfall, proportion_melting):
    snow = initial_snow
    for _ in range(hours):
        new_fall = round(snow + rate_of_snowfall, 6)
        melt = round(new_fall * proportion_melting, 6)
        snow = round(new_fall - melt, 6)
    return snow