def snow_day(hours, initial_snow, snowfall_rate, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += snowfall_rate
        total_snow *= 1 - melt_rate
    return round(total_snow, 6)