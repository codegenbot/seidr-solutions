def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    total_snow = 0
    for _ in range(hours):
        new_snow = rate_of_snowfall - melt_rate
        total_snow += max(0, new_snow)
    return initial_snow + total_snow