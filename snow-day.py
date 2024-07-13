def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        new_snow = total_snow + rate_of_snowfall - (total_snow * melt_rate)
        total_snow = round(new_snow, 2)
    return total_snow