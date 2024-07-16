def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        new_snow = _ * rate_of_snowfall
        total_snow += new_snow - melt_rate
    return total_snow