```
def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        new_snow = initial_snow + rate_of_snowfall - (initial_snow * melt_rate)
        total_snow += new_snow
        initial_snow = new_snow
    return round(total_snow, 2)