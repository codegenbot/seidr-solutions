```
def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    current_snow = initial_snow
    for _ in range(hours):
        new_snow = current_snow + rate_of_snowfall - (current_snow * melt_rate)
        current_snow = round(new_snow, 10)
    return current_snow