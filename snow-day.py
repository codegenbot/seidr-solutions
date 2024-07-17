def snow_day(hours, initial_snow, rate, melt_rate):
    total_snow = initial_snow
    for _ in range(hours):
        total_snow += rate
        total_snow *= 1 - melt_rate
    return round(total_snow, 6)