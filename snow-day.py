def snow_day(hours, initial_snow, rate_of_snowfall, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow *= (1 - melt_rate)
        total_snow += rate_of_snowfall
    return round(total_snow, 5)